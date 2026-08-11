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

### Roads

- Player places **main roads**.
- **Alleys / side paths fill in** as the town densifies.

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
| First Playable | Player places shelter + hearth; organic placement; stockpile; demolish with partial refund OK |
| Next | Main roads; shop building type (storefront + production + operator); stockpile restock |
| Later | Districts / old-town; alley fill; optional civic demolish rules |

## Consequences

- `Design/Building.md` and `Design/Economy.md` (businesses) align to shop mix model.
- Do not ship cosmetic-only town fill that ignores economy.

