# Decision: Food Chain

- Status: **Accepted**
- Date: 2026-08-10
- Related: Economy, Building, Animals, Water, CoreGameplayLoop, civ meters

## Context

Creative chose a **full food chain** — not Grain-as-calorie forever. This is a large buildout; phase it like water.

## Decision

Food is a real production → processing → consumption system:

- **Crops** — Grain first; expand crop set by biome/tech (vegetables, etc.).
- **Livestock products** — milk, meat, wool-adjacent goods per `20260810_animals.md` (when livestock ships).
- **Forage / hunt** — wild food and hunted meat as frontier supplements.
- **Cooking** — Kitchen / Bakery (and later food hall) turn inputs into **meals / food products**.
- **Diets** — citizen **meal variety** matters from **Village+ (B)**. Homestead/Hamlet can run on simple Grain/meals without variety pressure. Exact category model is data-tune later.
- **Spoilage** — **medium (B)**: raw spoils on a meaningful clock; cooked meals and proper storage (granary/warehouse, later packaging) last longer. Not a soft afterthought, not early hardcore logistics hell. Timers are data-tune.

### Player hunger

**Contextual (C)** — same family as hydration:

- Mild in settled / temperate play.
- Worse under cold, sickness, hard labor, or food scarcity pressure.
- Long ignore in those contexts can kill (soft → hard); not a constant everywhere-hunger nag.

Readable on controller HUD; meals from cooking chain refill better than raw Grain long-term.

### Settlement food security

Civ **food** meter (already in world-systems) is fed by this chain. Shortages → soft demote / crisis path already locked elsewhere.

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | **Grain** as gatherable resource / stockpile input; no full cook/diet/spoilage required for exit criteria |
| Next | Eat food item + simple hunger; camp cook / basic recipe (Grain → bread/meal) |
| Mid | Livestock products, forage/hunt food, Kitchen/Bakery chain, medium spoilage + granary value |
| Later | Diet variety, regional cuisine, packaging tech, trade spoilage pressure |

### First Playable stance

Do **not** gate Homestead→Hamlet on cooking trees or spoilage. Grain in the trio stays the FP food-adjacent resource.

## Consequences

- Bakery / Kitchen building family becomes load-bearing for mid-game food.
- Warehouse/granary upgrades matter for spoilage and security meters.
- Regional crops reinforce specialization + trade.
- Server-authoritative crafting, spoil ticks, and food meter.

## Locked interview answers

1. Hunger severity → **C contextual**
2. Spoilage → **B medium**
3. Citizen diet variety → **B from Village+**
