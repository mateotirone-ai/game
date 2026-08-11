# Decision: Materials, biomes, tools

- Status: **Accepted**
- Date: 2026-08-10
- Related: First Playable, Economy, World, Building

## Context

Minecraft-aspect gather/build systems, tied to regional economy and trade pressure.

## Decision

### Material palette

- **Minecraft gather/build feel** with **fewer unique item IDs**; expand via updates.
- First Playable trio remains **Timber / Ore / Grain** (plus **gold** for mint path).
- Resources are **biome-specific** (surface + underground extractables).
- Include strategic extractables such as **ores, timber, oil**, etc. that **bolster the local economy**.
- Scarcity / localization **forces trading or exploration** (regional specialization pillar).

### Renewable vs non-renewable

| Class | Examples | Rule |
|-------|----------|------|
| Renewable | Timber, Grain/crops, forage (optional), livestock products (later) | Regrow / restock with time or management |
| Slow-renewable | **Stone** / aggregate | Effectively available long-term but **slow** — do not let the map become a permanent scarred wasteland (anti-2b2t) |
| Non-renewable / depletable | Ore ladder, **Gold**, **Oil**, strategic minerals | Local nodes/fields deplete or move pressure to trade/explore |
| Processed | Planks, ingots, fuel, coins, food products | Made in workstations/shops/mint |

World presentation: harvesting may temporarily alter looks, but terrain/resource systems prefer **recovery / restock** over irreversible map ruin.

### Tools

- Tools can be **upgraded and repaired**.
- Each tier can also be **crafted as a new tool** (e.g. if one is lost/destroyed).
- **Upgrading an existing tool is cheaper** than crafting a brand-new tool of that tier.
- At zero durability tools enter a **broken state** (still an item) and are **repairable at a cost** — not deleted like classic Minecraft break.

## Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | Timber/Ore/Grain (+ gold path stub); basic tool; repair/upgrade stub OK |
| Next | Biome resource tables; oil/ore belts; upgrade-cheaper-than-craft |
| Later | Wider material IDs via updates; deep extractables |

## Consequences

- World gen resource belts must encode biome goods.
- Economy/trade loops depend on local missing goods.
- Tool economy favors care/upgrade over disposable crafting spam.
