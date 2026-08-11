# Content/Aevum/

Primary Unreal content root. **Do not invent or commit binary `.uasset` / `.umap` files from outside the editor** unless they are real authored assets.

## Folder map

| Folder | Purpose |
|--------|---------|
| `Core/` | Framework assets: GameInstance, base GameModes, subsystems glue, shared enums/structs (as assets) |
| `Characters/` | Settler player character, NPCs, animation BPs, skeletal meshes |
| `Environment/` | World art, foliage, props, biomes, landscape materials |
| `Maps/` | Levels, World Partition cells, lighting scenarios (`L_*`) |
| `UI/` | Controller-first CommonUI / UMG widgets, input mapping contexts |
| `Audio/` | Sound cues, metasounds, mix buses |
| `VFX/` | Niagara systems, cascading FX |
| `Materials/` | Shared materials and material functions/instances |
| `Data/` | DataAssets, DataTables, CurveTables driving systems |
| `Developer/` | Dev-only maps, debug widgets, cheats (strip or cook-exclude for shipping) |

## Asset naming conventions

Prefix + PascalCase descriptive name. Examples:

| Type | Prefix | Example |
|------|--------|---------|
| Level / Map | `L_` | `L_DevSandbox` |
| Blueprint | `BP_` | `BP_SettlerPlayer` |
| Widget Blueprint | `WBP_` | `WBP_SettlementHUD` |
| Material | `M_` | `M_StylizedFoliage` |
| Material Instance | `MI_` | `MI_StylizedFoliage_Autumn` |
| Material Function | `MF_` | `MF_DetailNoise` |
| Texture | `T_` | `T_Bark_D` (suffix `_D` `_N` `_ORM` etc.) |
| Static Mesh | `SM_` | `SM_Wall_Wood_01` |
| Skeletal Mesh | `SK_` | `SK_PlayerSettler` |
| Skeleton | `SKEL_` | `SKEL_Humanoid` |
| Animation Sequence | `A_` | `A_Idle_Loop` |
| Anim Blueprint | `ABP_` | `ABP_Player` |
| Niagara System | `NS_` | `NS_Campfire` |
| Sound Wave / Cue | `SW_` / `SC_` | `SC_UI_Confirm` |
| MetaSound | `MS_` | `MS_FootstepDirt` |
| Input Action | `IA_` | `IA_Interact` |
| Input Mapping Context | `IMC_` | `IMC_Default` |
| Data Asset | `DA_` | `DA_Resource_Wood` |
| Data Table | `DT_` | `DT_TechTree` |
| Curve Table | `CT_` | `CT_GrowthCurves` |
| Enum (asset) | `E_` | `E_RegionSpecialty` |
| Struct (asset) | `S_` | `S_TradeOffer` |
| Game Feature Data | `GF_` | `GF_Economy` |

### Texture suffixes

`_D` diffuse/albedo · `_N` normal · `_ORM` occlusion/roughness/metallic · `_M` mask · `_E` emissive · `_H` height

### Rules

1. One concept per asset; avoid mega-Blueprints — compose via components and Game Features.
2. Multiplayer-safe: authoritative simulation on server; cosmetics may be predicted client-side.
3. Use World Partition + One File Per Actor for large maps.
4. Lock `.uasset` / `.umap` with Git LFS locks when collaborating.
5. Place experimental sandboxes under `Developer/`.
