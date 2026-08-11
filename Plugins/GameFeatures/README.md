# Plugins/GameFeatures/

Domain systems as **Unreal Game Feature plugins**. Enable/disable features without bloating the primary module.

Each feature owns its content, optional C++ module, and design counterpart under `Design/`.

| Plugin | Domain | Design doc |
|--------|--------|------------|
| `WorldGeneration` | Procedural worlds, biomes, resources placement | `Design/World.md` |
| `Building` | Modular construction | `Design/Building.md` |
| `Resources` | Gathering, nodes, inventory materials | `Design/Economy.md` |
| `Economy` | Prices, businesses, specialization | `Design/Economy.md` |
| `Trade` | Routes, caravans, markets | `Design/Trade.md` |
| `Settlements` | Village → city growth | `Design/World.md`, `Progression.md` |
| `Technology` | Tech progression | `Design/Progression.md` |
| `Government` | Democracy, laws, offices | `Design/Government.md` |
| `Diplomacy` | Factions, treaties, reputation | `Design/Government.md` |
| `Combat` | Conflict, raids, defense | `Design/Combat.md` |
| `Characters` | Settler PC, NPCs, roles | `Design/Vision.md` |
| `Multiplayer` | Sessions, replication helpers, server | `Design/Multiplayer.md` |
| `AIWorld` | Settlement AI, ambient simulation | `Design/World.md` |

## Rules

- Prototype in single-player, but **model data and RPCs for multiplayer from day one**.
- Prefer DataAssets over hardcoded constants.
- Do not commit plugin `Binaries/` or `Intermediate/`.
- Do not embed console SDK dependencies here.
