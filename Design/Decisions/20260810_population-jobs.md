# Decision: Population & Jobs

- Status: **Accepted**
- Date: 2026-08-10
- Related: Economy, Building, Government, food/water meters, Multiplayer

## Context

Creative: **A**, clarified twice —

1. Each job is **real** and **produces for the town**.
2. Work is **visible** — you can see citizens doing the work.

## Decision

### Population

- Pop **rises/falls with civ meters** and housing/food/security (and peers) — soft immigration when the town is viable; soft leave/crisis when not.
- Arrival is meter-gated (see world-systems), not a free stage gift.

### Jobs (real production + visible)

- Jobs are **real production roles** tied to buildings (farmer, hauler, guard, baker, miner…).
- A filled job **outputs goods / services into the town economy** (stockpile, shop, civ upkeep) — measurable throughput, not a +% sticker.
- Unfilled jobs → that building underproduces or idles.
- **Visibility required:** when a job is filled, players can **see a worker performing that work** at/near the workplace (animations, props, haul loops as fidelity allows). A living town, not spreadsheet-only.
- Structural default for cost: **workplace-anchored** visible workers (and short haul loops) first; full home→work commute agent sim is a **later fidelity upgrade**, not required to satisfy “visible work.”

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | Solo settler; no citizen jobs required |
| Next | Soft pop; a few real job slots producing into stockpile; visible workers at those buildings |
| Mid | Broader job table; labor shortage readable; richer work anims / short hauls |
| Later | Optional full commute/schedule agent fidelity |

### Authority

Pop counts, job fills, and production ticks are **server-authoritative**. Worker presentation can predict; outputs resolve on server.

## Locked interview answers

1. Pop/jobs → **A + real producing jobs + visible work** (soft pop; real outputs; see them work; full agent commute not required early)
