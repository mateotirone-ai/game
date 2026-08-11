# Decision: Food Chain

- Status: **Accepted** (hunger severity locked; spoilage/diets still open)
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
- **Diets** — settlement / citizen needs care about food variety or categories over time (not one infinite Grain blob as end state). Exact diet model TBD.
- **Spoilage** — food can degrade; storage, packaging, and logistics matter (ties to Trade.md risk). Exact timers TBD.

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
| Mid | Livestock products, forage/hunt food, Kitchen/Bakery chain, light spoilage |
| Later | Diet variety, regional cuisine, packaging tech, trade spoilage pressure |

### First Playable stance

Do **not** gate Homestead→Hamlet on cooking trees or spoilage. Grain in the trio stays the FP food-adjacent resource.

## Consequences

- Bakery / Kitchen building family becomes load-bearing for mid-game food.
- Warehouse/granary upgrades matter for spoilage and security meters.
- Regional crops reinforce specialization + trade.
- Server-authoritative crafting, spoil ticks, and food meter.

## Open questions

1. ~~Player hunger severity~~ → **C contextual** (locked).
2. How harsh is spoilage early vs late?
3. Do citizens need meal variety from day one of Hamlet, or only later stages?
