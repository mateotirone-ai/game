# Combat

## Intent

Conflict supports political and economic stories—defense of routes and settlements, raids, sanctioned wars—not pure FPS deathmatch as the primary loop.

**Timing:** real combat systems land **after** the Homestead loop is fun.

## Fantasy

Player is **army commander**: train and house soldiers. Fights play like **first-person Clash of Clans** (base/army from your eyes). Claim attacks require **war declaration**. Security bands (Eve-like) shape how wild the frontier is.

**Systems** (`Design/Decisions/20260810_army-combat.md`): early = you + few militia, base-defense AI, light FP command. Later = defense stays light; **attacks** unlock CoC-style deploy/orders (stage/tech gated).

## Modes

- **Personal / small-scale** — Wildlife (harsher on frontiers), bandits, recovery runs to gravestones.
- **Settlement defense** — Walls, trained soldiers, siege logistics. Militia assignable to garrison/outpost/escort; hireable guards as alternative.
- **Declared war** — Diplomacy-gated; objectives beyond kill count (supplies, claims, treaty terms).

## Feel

Soft stylized readability. Controller-first. Telegraphed threats; army/base clarity over twitch arena.

## Death & phoenix

The settler can die. First Playable baseline: **gravestones** for recoverable gear; settlement state persists. Imprisonment, ransom, and war consequences can layer later. See `Design/Decisions/20260810_first-playable.md` and `20260810_phoenix-continuity.md`.

## Authority

Damage application, loot grants, and war declarations resolve on the server.
