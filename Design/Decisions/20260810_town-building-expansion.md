# Decision: Town building & expansion

- Status: **Accepted**
- Date: 2026-08-10
- Related: `20260810_first-playable.md`, `20260810_world-systems-interview.md`, `Design/Building.md`, `Design/Economy.md`

## Context

Creative interview on how towns grow beyond the first shelter: who builds, layout, roads, shops, ownership, stock.

## Decision

### Who builds

- **Player builds all businesses** — NPCs do **not** found or own shops/workshops.
- Town may still **fill housing** / ambient life as people arrive (homes, not businesses).
- Player places civic + production + shops that matter — buildings must be **usable systems**, not props.

### Layout

- **Organic fill early** along roads/terrain.
- **Districts later** — can preserve an **old-town** quarter with distinct character vs newer growth.

### Roads (growth-driven + topography)

Roads **spawn from building placement**, following **topography** (contour-aware paths — not straight through cliffs/water). Strict rules:

1. First relevant build near the hearth snaps a road **hearth/plaza → building**.  
2. Build on the **edge of owned/buildable land** → extend from the **nearest existing road**.  
3. Interior builds already on a road do **not** spawn new roads.  
4. Roads **upgrade visually with town stage** (dirt → gravel → stone → paved → boulevard). Manual pave tool optional later.  
5. Civic builds on town land use the same connect-to-nearest-road rule.

**Ownership (B):** segment on a **private lot** = private drive; once it hits **town/common land** = town road (public use).

### Claims (from prior Decision)

- Small hearth plot, expandable via **stage + staking**.

### Shops (working shop system)

A shop is a **mix**:

1. Storefront (buy/sell at a counter)  
2. Production (outputs goods)  
3. Assignable operator (citizen or player-run)

- **Ownership:** **player-owned only** (no NPC/citizen businesses).
- Operators may still be assignable citizens working *your* shop — they don’t own it.
- **Inventory:** local shop stock **and** optional restock/orders from settlement stockpile.
- Everything feeds the full civilization loop (meters, coins, jobs, trade).

### Demolish / rebuild

- You **can** demolish and rebuild freely as the town evolves.
- Demolish returns **some materials that make sense** (partial refund — not 100% free recycle; damaged/consumed inputs stay gone).
- Later politics may add friction for civic plots; baseline is player agency to reshape.

### Sequencing

| Phase | Building focus |
|-------|----------------|
| First Playable | Player places shelter + hearth; organic placement; auto road hearth→shelter; stockpile; demolish with partial refund OK |
| Next | Edge-build road growth; shop buildings; stockpile restock |
| Later | Districts / old-town; road stage cosmetics; optional civic demolish rules |

## Consequences

- `Design/Building.md` and `Design/Economy.md` (businesses) align to shop mix model.
- Do not ship cosmetic-only town fill that ignores economy.

