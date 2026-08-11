# World

## Intent

A shared persistent world with biomes, resources, and settlement sites that support **regional specialization** and long-distance logistics.

**Macro layout:** hand-authored continents, choke points, and resource belts (Eve-like readability). **Local detail:** procedural fill. First Playable uses a hand-authored plains crossroads.

## Layers

1. **Terrain & biomes** — Climate, elevation, water, fertility, mineral bands. Water is a full systems pillar (sources, wells/irrigation, drought stress) — see `Design/Decisions/20260810_water.md`.
2. **Resources** — Nodes and densities biased by biome (see Resources / Economy).
3. **Sites** — Spawn-friendly valleys, harbors, chokepoints, ruins.
4. **Infrastructure** — Roads, warehouses, docks built by players/settlements.
5. **Political map** — Settlement claims, borders, treaties overlays.
6. **Wildlife** — Livestock (farms) + hunting/threat; intensity **frontier-varies** with security bands (see `Design/Decisions/20260810_animals.md`).
7. **Pollution** — Industry can stress soil/water/air with real meter and farm/health effects; cleanup/tech mitigate (`Design/Decisions/20260810_pollution.md`).

## Settlement growth stages

| Stage | Feel | Typical unlocks |
|-------|------|-----------------|
| Homestead | Survival / founding | Shelter, hearth, basic storage |
| Hamlet | First community | Housing plots, workshop, stockpile |
| Village | Civic roots | Markets, shared builds, early offices |
| Town | Specialization | Walls, multiple districts |
| City | Institutions | Complex industry, diplomacy hall, large logistics |

Exact thresholds live in data (`DT_SettlementTiers`) once authored.

## Persistence

World state (buildings, stockpiles, offices, treaties) is server-authoritative and survives logout. Chunk/streaming strategy: World Partition-friendly; simulation lod via AIWorld.

## Stylized presentation

Strong biome palettes, readable resource silhouettes, modular environment kits that match Building modules.
