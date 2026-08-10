# Multiplayer

## Intent

Dedicated **authoritative servers** are the target architecture. Prototype in single-player using the same ownership, inventory, and settlement APIs.

## Principles

1. **Server is truth** — Simulation of economy, combat resolution, votes, and crafting completion runs on authority.
2. **Predict carefully** — Movement and UI may predict; never trust clients for grants of goods or rights.
3. **Persistence first** — Character and world databases outlive process restarts.
4. **Sharding later** — Design data model for regions/settlements that can split across processes eventually.
5. **AIWorld fillers** — NPCs and simulated traders stand in for sparse populations.

## Session model (target)

- Immortal characters bound to accounts.
- Cross-session world continuity.
- Optional private/dev sandboxes for designers (not the live economy).

## PC → console

Input and UI are controller-first now. Platform services (matchmaking, commerce, privileges) stay behind interfaces; **no console SDK code or binaries in this repository**.

## Security

- Validate all RPCs.
- Rate-limit economic actions.
- Log privileged government actions.
- Never commit secrets or service keys.
