# Decision: Online Model (Private + Megaworld)

- Status: **Accepted**
- Date: 2026-08-11
- Related: Multiplayer, Vision, world-systems (Eve shared world), first-playable

## Context

Creative chose **both (C)**: local/private worlds **and** an optional shared megaworld.

This **extends** (does not erase) the Eve-like shared-world fantasy: the megaworld remains the flagship persistent map; private worlds are a first-class mode too.

## Decision

### Modes

1. **Private / local (or friends) world** — sandbox for solo, friends, or design; same gameplay rules shaped for server authority (listen server / dedicated private).
2. **Shared megaworld** — optional join into the Eve-like persistent map (one public world fantasy, security bands, frontier spawn, etc.).

Players may use private worlds without being forced always-online into the megaworld. Megaworld remains the long-arc multiplayer civilization fantasy.

### Rules continuity

- Inventory, economy, votes, crafting APIs stay **server-authoritative-shaped** in both modes (SP private still uses authority patterns — already FP stance).
- Private worlds do **not** mint power into the megaworld (no asset teleport that breaks the live economy). Cross-save policy TBD in a later Decision if needed.
- Vision non-goal stays: **offline-only as the sole long-term architecture** is rejected; online megaworld is still a product pillar.

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | Local/SP authority-shaped sandbox |
| Next | Private dedicated / listen-server friends |
| Mid | Megaworld shard / persistence online |
| Later | Clear private↔mega policy (cosmetics-only transfer, or none) |

## Locked interview answers

1. Online model → **C both** (private world + optional shared megaworld)
