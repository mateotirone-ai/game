# Decision: Army & Combat Systems

- Status: **Accepted**
- Date: 2026-08-10
- Related: Combat, Building (Barracks), Diplomacy, Multiplayer, first-playable sequencing

## Context

Fantasy already locked: first-person Clash-of-Clans-flavored army play **after** Homestead fun; claim attacks need war-flag; Eve-like security bands.

Creative chose **A + C** for early army composition / feel.

## Decision

### Early army (**A + C**)

- **Composition:** you + a **few trained militia** from **Barracks** (not a huge unit sandbox day one).
- **Play feel:** **mostly base-defense AI** — walls, stationed militia, telegraphed threats. You fight and **light-command from first person**; you do **not** constantly micro every unit like full CoC early.
- CoC kinship = readable base + army presence from your eyes, not mandatory RTS finger-dance on gamepad.

### Mid / late command (**B + C**)

- **Defense stays AI-light** — garrison, walls, telegraphed holds; no mandatory RTS micro while defending home.
- **Attacks unlock deeper CoC-style deploy/orders** later (tech / settlement stage gate): place/direct squads for offensive ops under war-flag.
- Early play remains A+C; depth is an unlock, not day-one burden.

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | No army systems (personal wildlife stub OK) |
| After Homestead fun | Barracks → small militia; defense AI + FP presence |
| Mid | Escorts for caravans; simple attack/defend under war-flag |
| Later | Larger armies, siege logistics, gated offensive deploy/orders |

### Unit assignment (**C** hybrid)

- **Core militia pool** from Barracks — assign to **garrison**, **outposts**, or **escorts**.
- **Hireable escorts/guards** also exist (pay for temporary protection without pulling every defender off the walls) — same spirit as hireable caravan carriers.
- Pulling militia to escort **weakens home defense** (readable tradeoff). Hiring costs coin/contracts instead.

### Army growth

- Size scales with **population** and **Barracks capacity** (not a fixed early headcount).
- Fill by **training villagers** (labor tradeoff) or **recruiting from other towns** (pay / diplomacy).
- See `Design/Decisions/20260810_numeric-thresholds.md`.

Army soft caps = Barracks tier × pop; data-tune.

### Authority

Unit spawns, damage, capture, and war-flag gates are **server-authoritative**. Client predicts cosmetics only.

## Locked interview answers

1. Early army → **A+C** (you + few militia; base-defense AI, light FP command)
2. Mid/late → **B+C** (defense stays light; attacks unlock CoC-style deploy/orders)
3. Assignment → **C** hybrid (militia pool + hireable escorts)
