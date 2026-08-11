# Decision: Materials, biomes, tools

- Status: **Accepted** (tool-break detail pending — see Open)
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

### Tools

- Tools can be **upgraded and repaired**.
- Each tier can also be **crafted as a new tool** (e.g. if one is lost/destroyed).
- **Upgrading an existing tool is cheaper** than crafting a brand-new tool of that tier.

### Open — break behavior

When durability hits zero:

- A) Breaks like Minecraft (gone / must replace)  
- B) Enters broken state — repairable at cost  
- C) Never fully breaks — only loses efficiency  
- D) Something else  

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
