# Building

## Intent

**Terrain-aware modular construction** that scales from personal shelter to a living town — organic early, districts later — with buildings that are **fully usable** in the civilization (shops, production, civic), not props.

See `Design/Decisions/20260810_town-building-expansion.md` and **stage-locked catalog** in `Design/Decisions/20260810_building-catalog.md`.

## Stage-locked upgrades

Building tiers track settlement stage: Homestead → Hamlet → Village → Town → City (T1–T5). Visual + functional. Cannot upgrade past current settlement stage. **Fixed pad:** T5 fits original T1 pad (grow up/density, not wider).

## Regional architecture & variants

**Strong biome architecture** on the same pad/function. **No building has only one variation** — minimum 3 base variants (A/B/C) plus region + stage. See `Design/Decisions/20260810_building-art-direction.md`.

## Principles

- **Land-following, not pure grids** — Snap/sockets that respect terrain; towns feel real, not lattice cities.
- **Function follows structure** — Workstations, shops, and storage have recipes, inventories, and operators.
- **Player businesses + town housing fill** — You place all shops/production; NPCs do not own businesses. Housing/ambient fabric can densify around roads.
- **Roads** — Growth-driven: edge builds spawn topo-following roads; private drive on lot → town road on common land; upgrade with settlement stage.
- **Districts / old-town** — Later zoning can preserve characterful early fabric vs newer growth.
- **Claims** — Small expandable hearth plot (stage + staking).
- **Repair & upkeep** — Tied to civ meters / decay pressure.
- **Demolish** — Allowed; partial material refund that makes sense (not full free recycle).
- **Upgrades** — All buildings upgradeable; upgrades are **visual + functional** (see `Design/Decisions/20260810_storage-building-upgrades.md`).
- **Storage** — Settlement storage buildings (upgradable) + personal inventory; organized stockpile UX, not chest sprawl.

## Shops

Storefront + production + assignable operator. **Player-owned only**; citizens may work as operators. Local stock + optional settlement stockpile restock.

## Controller-first build UX

- Radial or filtered piece categories.
- Ghost preview with valid/invalid placement.
- Hold-to-confirm; rotate / variant / material tier.
- “Upgrade in place” where possible.

## Multiplayer

Server validates placement, materials, permissions, and shop transfers. Clients predict ghosts only. OFPA-friendly for collaboration.
