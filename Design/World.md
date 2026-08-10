# World

## Intent

A procedural (or semi-procedural) world with biomes, resources, and settlement sites that support **regional specialization** and long-distance logistics.

## Layers

1. **Terrain & biomes** — Climate, elevation, water, fertility, mineral bands.
2. **Resources** — Nodes and densities biased by biome (see Resources / Economy).
3. **Sites** — Spawn-friendly valleys, harbors, chokepoints, ruins.
4. **Infrastructure** — Roads, warehouses, docks built by players/settlements.
5. **Political map** — Settlement claims, borders, treaties overlays.

## Settlement growth stages

| Stage | Feel | Typical unlocks |
|-------|------|-----------------|
| Camp | Survival | Shelter, campfire, basic storage |
| Village | Community | Housing plots, workshop, council hut |
| Town | Specialization | Markets, walls, multiple districts |
| City | Institutions | Complex industry, diplomacy hall, large logistics |

Exact thresholds live in data (`DT_SettlementTiers`) once authored.

## Persistence

World state (buildings, stockpiles, offices, treaties) is server-authoritative and survives logout. Chunk/streaming strategy: World Partition-friendly; simulation lod via AIWorld.

## Stylized presentation

Strong biome palettes, readable resource silhouettes, modular environment kits that match Building modules.
