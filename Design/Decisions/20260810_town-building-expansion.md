# Decision: Town building & expansion

- Status: **Accepted** (demolish/rebuild rule pending one answer — see Open)
- Date: 2026-08-10
- Related: `20260810_first-playable.md`, `20260810_world-systems-interview.md`, `Design/Building.md`, `Design/Economy.md`

## Context

Creative interview on how towns grow beyond the first shelter: who builds, layout, roads, shops, ownership, stock.

## Decision

### Who builds

- **Mix:** player places important / functional buildings; town fills housing and everyday shops over time.
- Player can place **anything that matters** for civilization — buildings must be **usable systems**, not props.

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

- **Ownership:** both player-owned and citizen-owned businesses.
- **Inventory:** local shop stock **and** optional restock/orders from settlement stockpile.
- Everything feeds the full civilization loop (meters, coins, jobs, trade).

### Sequencing

| Phase | Building focus |
|-------|----------------|
| First Playable | Player places shelter + hearth; organic placement; stockpile; no full shop sim required |
| Next | Main roads; shop building type (storefront + production + operator); stockpile restock |
| Later | Districts / old-town; citizen-owned shops; alley fill; zoning politics |

## Open (answer next)

**Demolish / rebuild policy** — awaiting creative pick:

- A) Freely (material cost)  
- B) Old-town protected / harder to erase  
- C) Major changes need citizen vote later  
- D) Free early; politics later  

## Consequences

- `Design/Building.md` and `Design/Economy.md` (businesses) align to shop mix model.
- Do not ship cosmetic-only town fill that ignores economy.
