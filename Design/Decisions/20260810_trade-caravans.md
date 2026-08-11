# Decision: Trade Routes & Caravans

- Status: **Accepted**
- Date: 2026-08-10
- Related: Trade, Economy, Multiplayer, Diplomacy, Food spoilage, roads

## Context

Creative chose **both**: player haul early; unlock caravan companies / contracts later.

## Decision

### Movement of goods

- **Early:** player **hauls** (inventory, later cart/wagon). Teaches logistics friction and regional prices by hand.
- **Later unlock:** **auto caravans** — set a route / contract; carts or caravan entities move goods on a timer with **road risk** (bandits, spoilage, war zones, bad roads).
- Not caravan-only from day one; not forever-manual as the end fantasy.

### Who runs caravans (**C + D**)

All of these coexist:

1. **Private** — player-owned businesses / companies run their own carts.
2. **Civic** — optional settlement-funded convoy for shared town trade.
3. **Hireable NPC carriers** — pay a carrier to move goods **without owning the carts** (fee + their risk terms).

Players choose ownership vs hiring based on capital and control. Civic is a town instrument, not the only path.

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | Local stockpile / coins only; inter-town trade **out of scope** |
| Next | Personal haul between nearby sites / first market |
| Mid | Cart capacity; posted contracts; first caravan unlock |
| Later | Caravan companies, escorts, tariffs, embargoes, route upkeep |

### Road risk readability (**A**)

**Eve-like security bands / map coloring** — route wildness and baseline risk are **readable before you send**. Players can plan escorts, hire carriers, or avoid red routes with information, not pure fog-of-war gambling.

Actual ambush resolution still rolls on the server inside those bands; the band itself is not hidden.

### PvP / raids (structural default)

Caravan attack follows existing **war-flag + security-band** rules (`20260810_world-systems-interview.md`). No free grief of high-sec hauls without the locked declaration / band constraints.

### Authority

Hauls, caravan departure/arrival, losses, and market clears are **server-authoritative**.

## Locked interview answers

1. Movement → **C** haul early, caravans later
2. Operators → **C+D** private + civic + hireable NPC carriers
3. Risk UX → **A** Eve-like readable security bands
