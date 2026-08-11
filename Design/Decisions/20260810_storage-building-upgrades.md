# Decision: Storage, organization, building upgrades

- Status: **Accepted**
- Date: 2026-08-10
- Related: `20260810_materials-tools.md`, `20260810_town-building-expansion.md`, `Design/Building.md`

## Context

Creative direction rejected scatter-chest Minecraft storage sprawl. Wants organized settlement storage buildings and universal visual building upgrades.

## Decision

### Storage

- **No** freeform placeable chests as the primary system.
- Storage = **personal inventory** + **settlement storage buildings** (warehouse / stockpile structures).
- Storage buildings are **upgradable** (capacity, organization features, possibly logistics).
- Includes an **organization system** (sort, categories, filters, clear stockpile UX) — not a messy chest maze.
- Shop local stock still exists per shop Decision; settlement storage is the civic backbone and restock source.

### Building upgrades (universal)

- **All buildings are upgradeable.**
- Upgrades are **visual** (building looks improved) **and** functional (stats/capacity/recipes/defense as appropriate).
- Ties to materials, stages, and economy — upgrades cost resources/coin and read clearly in first-person soft stylized art.

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | Personal inventory + basic hearth stockpile building; one visual upgrade step OK |
| Next | Storage building tiers + organization UI; upgrade FX/meshes for core buildings |
| Later | Full upgrade trees per building family |

## Consequences

- Do not implement MC chest spam as the storage endgame.
- Building content pipeline must plan **tier visual variants** (MI_/mesh swaps or modular kits).
- Inventory UX investment is mandatory for stockpile organization.
