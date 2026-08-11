# Decision: Phoenix continuity (not unkillable immortal)

- Status: **Accepted**
- Date: 2026-08-10
- Related: `Design/Decisions/20260810_first-playable.md`, `Design/Vision.md`, `Design/Pillars.md`, `Design/Glossary.md`

## Context

Creative direction clarified: the player **can die** (Minecraft-like). What endures is the **settlement / civilization**. Player fantasy is **phoenix** — you return; the city grows around you.

## Decision

- Replace “immortal player character” language with **phoenix settler** + **persistent civilization**.
- Pillar 1 retitled to **Phoenix continuity** (death is real; identity and city stakes persist; gravestones for loot).
- Settlement stage vocabulary prefers real-life ladder: Homestead → Hamlet → Village → Town → City.
- Death/loot baseline: gravestones (from First Playable Decision).

## Consequences

- Docs, AGENTS, and naming examples updated to match.
- Blueprint example names use `BP_SettlerPlayer` / `SK_PlayerSettler` instead of Immortal*.
- Combat/Multiplayer docs no longer assume an unkillable avatar.
