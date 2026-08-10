# Aevum

Working title for a PC-first Unreal Engine 5 **persistent multiplayer civilization game** experienced through an **immortal player character**. Combines survival, modular construction, procedural worlds, settlement growth, real economics, regional specialization, businesses, trading, technology, diplomacy, democracy, cooperation, and conflict.

Future targets: **Xbox Series** and **PlayStation 5** (platform SDKs are never committed here).

## Authoritative design

Game specification lives in [`Design/`](Design/). Implementation follows those documents; when code and design disagree, update design deliberately via `Design/Decisions/`.

## Repository layout

| Path | Purpose |
|------|---------|
| `Aevum.uproject` | Unreal project file (Engine **5.5**) |
| `Config/` | Committed default ini configuration |
| `Content/Aevum/` | Game content (authored in-editor; see naming conventions) |
| `Source/` | C++ module + Game / Editor / Server targets |
| `Plugins/GameFeatures/` | Domain systems as Game Feature plugins |
| `Design/` | Authoritative design spec |
| `Documentation/` | Engineering / production docs |
| `RawAssets/` | DCC source (Blender, textures, audio) tracked via Git LFS |
| `Tests/` | Automated / functional tests |
| `Tools/` | Editor scripts, exporters, utilities |
| `Build/` | Build scripts & whitelisted packaging helpers |
| `.github/` | PR/issue templates and CI stubs |

## Prerequisites

- Unreal Engine **5.5** (or update `EngineAssociation` deliberately)
- Git + **Git LFS** (`git lfs install`)
- Visual Studio 2022 (Windows) or corresponding toolchain per platform
- Do **not** clone console SDKs into this tree

## Quick start

```bash
git clone <repo-url>
cd game-main
git lfs install
git lfs pull
# Generate project files, then open Aevum.uproject in UE 5.5
```

## Multiplayer stance

Prototype in single-player, but keep inventories, settlements, and economy **server-authoritative in shape**. An `AevumServer` target is stubbed for dedicated servers.

## Git & LFS

- Generated folders (`Binaries/`, `Intermediate/`, `Saved/`, `DerivedDataCache/`) are ignored.
- `.uasset`, `.umap`, and large raw media use **Git LFS** (see `.gitattributes`).
- Prefer LFS file locking for binary assets when collaborating.
- Secrets, credentials, and console SDK material must never be committed.

## License

Proprietary — see [LICENSE](LICENSE).
