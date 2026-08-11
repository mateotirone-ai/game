# Creates Content/Aevum/Maps/L_DevSandbox greybox in the Unreal Editor.
#
# In UE 5.8:
#   1. Edit → Plugins → enable "Python Editor Script Plugin" → restart if asked
#   2. File → Execute Python Script… → pick this file
#   3. Alt+P to Play
#
# Or Output Log Python console:
#   exec(open(r"PATH\\TO\\create_l_dev_sandbox.py", encoding="utf-8").read())

import unreal


LEVEL_PATH = "/Game/Aevum/Maps/L_DevSandbox"
CUBE_MESH_PATH = "/Engine/BasicShapes/Cube"


def _ensure_maps_dir() -> None:
    if not unreal.EditorAssetLibrary.does_directory_exist("/Game/Aevum"):
        unreal.EditorAssetLibrary.make_directory("/Game/Aevum")
    if not unreal.EditorAssetLibrary.does_directory_exist("/Game/Aevum/Maps"):
        unreal.EditorAssetLibrary.make_directory("/Game/Aevum/Maps")


def _new_level(path: str) -> None:
    level_sub = unreal.get_editor_subsystem(unreal.LevelEditorSubsystem)
    # new_level(asset_path) creates/saves a blank map at that content path
    level_sub.new_level(path)


def _spawn_mesh_actor(
    label: str,
    location: unreal.Vector,
    scale: unreal.Vector,
    mesh: unreal.StaticMesh,
) -> unreal.Actor:
    actor_sub = unreal.get_editor_subsystem(unreal.EditorActorSubsystem)
    actor = actor_sub.spawn_actor_from_class(unreal.StaticMeshActor, location)
    actor.set_actor_label(label)
    actor.set_actor_scale3d(scale)
    component = actor.static_mesh_component
    component.set_static_mesh(mesh)
    component.set_mobility(unreal.ComponentMobility.STATIC)
    return actor


def _spawn_class(actor_class, label: str, location: unreal.Vector) -> unreal.Actor:
    actor_sub = unreal.get_editor_subsystem(unreal.EditorActorSubsystem)
    actor = actor_sub.spawn_actor_from_class(actor_class, location)
    actor.set_actor_label(label)
    return actor


def main() -> None:
    _ensure_maps_dir()

    if unreal.EditorAssetLibrary.does_asset_exist(LEVEL_PATH):
        unreal.log_warning(f"{LEVEL_PATH} already exists — opening and rebuilding actors.")
        level_sub = unreal.get_editor_subsystem(unreal.LevelEditorSubsystem)
        level_sub.load_level(LEVEL_PATH)
        # Clear prior greybox labels if re-run
        actor_sub = unreal.get_editor_subsystem(unreal.EditorActorSubsystem)
        for actor in actor_sub.get_all_level_actors():
            name = actor.get_actor_label()
            if name.startswith("Greybox_"):
                actor_sub.destroy_actor(actor)
    else:
        _new_level(LEVEL_PATH)

    mesh = unreal.EditorAssetLibrary.load_asset(CUBE_MESH_PATH)
    if mesh is None:
        unreal.log_error(f"Missing engine mesh {CUBE_MESH_PATH}")
        return

    # Floor
    _spawn_mesh_actor(
        "Greybox_Floor",
        unreal.Vector(0.0, 0.0, -50.0),
        unreal.Vector(100.0, 100.0, 1.0),
        mesh,
    )

    # Crossroads roads
    road_a = _spawn_mesh_actor(
        "Greybox_Road_A",
        unreal.Vector(0.0, 0.0, 5.0),
        unreal.Vector(80.0, 4.0, 0.5),
        mesh,
    )
    road_b = _spawn_mesh_actor(
        "Greybox_Road_B",
        unreal.Vector(0.0, 0.0, 5.0),
        unreal.Vector(4.0, 80.0, 0.5),
        mesh,
    )
    road_b.set_actor_rotation(unreal.Rotator(0.0, 0.0, 0.0), False)

    # Light + sky
    _spawn_class(unreal.DirectionalLight, "Greybox_Sun", unreal.Vector(0.0, 0.0, 500.0))
    _spawn_class(unreal.SkyLight, "Greybox_SkyLight", unreal.Vector(0.0, 0.0, 0.0))
    try:
        _spawn_class(unreal.SkyAtmosphere, "Greybox_SkyAtmosphere", unreal.Vector(0.0, 0.0, 0.0))
    except Exception:
        unreal.log_warning("SkyAtmosphere spawn skipped (not available).")

    # Player start above ground
    _spawn_class(unreal.PlayerStart, "Greybox_PlayerStart", unreal.Vector(0.0, 0.0, 120.0))

    level_sub = unreal.get_editor_subsystem(unreal.LevelEditorSubsystem)
    level_sub.save_current_level()

    unreal.log("=== Aevum greybox ready: L_DevSandbox ===")
    unreal.log("Click the viewport, then press Alt+P to Play (WASD + mouse).")


if __name__ == "__main__":
    main()
