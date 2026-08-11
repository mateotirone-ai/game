# Decision: Trade Routes & Caravans

- Status: **Accepted** (haul + caravans locked; ownership/risk details pending)
- Date: 2026-08-10
- Related: Trade, Economy, Multiplayer, Diplomacy, Food spoilage, roads

## Context

Creative chose **both**: player haul early; unlock caravan companies / contracts later.

## Decision

### Movement of goods

- **Early:** player **hauls** (inventory, later cart/wagon). Teaches logistics friction and regional prices by hand.
- **Later unlock:** **auto caravans** — set a route / contract; carts or caravan entities move goods on a timer with **road risk** (bandits, spoilage, war zones, bad roads).
- Not caravan-only from day one; not forever-manual as the end fantasy.

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | Local stockpile / coins only; inter-town trade **out of scope** |
| Next | Personal haul between nearby sites / first market |
| Mid | Cart capacity; posted contracts; first caravan unlock |
| Later | Caravan companies, escorts, tariffs, embargoes, route upkeep |

### Authority

Hauls, caravan departure/arrival, losses, and market clears are **server-authoritative**.

## Open questions

1. Who runs caravans — player business only, civic convoy, or both?
2. How visible/controllable is road risk (Eve-ish security bands vs dice in fog)?
3. Can hostile players raid caravans only under war-flag / security rules already locked?
