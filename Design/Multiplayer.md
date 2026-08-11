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

- **Both modes** (`Design/Decisions/20260810_online-model.md`):
  - **Private / local (or friends) world** — solo/sandbox without forcing megaworld login.
  - **Shared megaworld** — optional Eve-like persistent map (flagship MP fantasy).
- Megaworld: everyone who joins that realm shares the same persistent map.
- Players run **one capital** plus **lesser outposts** with **hard claims** to spread on the map (`Design/Decisions/20260810_capital-outposts.md`).
- New players **frontier-spawn**: spaced from others, travel-range for trade, prefer **underused biomes** (`Design/Decisions/20260810_new-player-spawn.md`).
- Settler characters bound to accounts (phoenix continuity across sessions).
- Deep character customization + later town uniforms/ranks (cosmetic; no P2W) — see `Design/Decisions/20260810_character-customization.md`.
- Cross-session world continuity (per realm).
- War-declare required to attack claims; Eve-like high/low security bands (megaworld; private as configured).
- See `Design/Decisions/20260810_world-systems-interview.md` for megaworld civ rules.

## Communication

- **Global text chat**, **private messages**, and **in-game proximity voice** (`Design/Decisions/20260810_chat-social.md`).
- Mute/block/report required; PTT-friendly for controllers.

## Business boundary

Buy-once product intent; **no pay-to-win** power.

## PC → console

Input and UI are controller-first now. Platform services (matchmaking, commerce, privileges) stay behind interfaces; **no console SDK code or binaries in this repository**.

## Security

- Validate all RPCs.
- Rate-limit economic actions.
- Log privileged government actions.
- Never commit secrets or service keys.
