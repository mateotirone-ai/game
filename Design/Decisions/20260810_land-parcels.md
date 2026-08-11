# Decision: Land parcels / lots vs buildings

- Status: **Accepted**
- Date: 2026-08-10
- Related: building-catalog, town-building, first-playable, multiplayer Eve world, government

## Context

Creative direction separated **land ownership** from **buildings**. Lots can grow; buildings upgrade on owned land. Enables buying land in other players’ towns (shared world).

## Decision

### Two layers

1. **Parcel / lot** — ownable land (buy, sell). Holding grows by **buying adjacent lots**, not magically stretching one parcel.  
2. **Building** — placed on a lot you own; upgrades along town stage; **building pad footprint** stays stable within its lot (taller/denser). Multi-lot estates = multiple parcels owned next to each other.

### Homestead start

- You claim **one starter lot**.  
- Other town lots appear as inhabitants arrive / town parcels.

### Cross-town / foreign buyers

All of these are valid modes — **configured by the town / property owner** (laws + listing settings), not a single global rule:

- Open sale to anyone  
- Restrict foreign buyers  
- Require citizenship / reputation first  

Town government + owner listing flags compose the real policy (IRL-like local property rules).

## Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | One starter lot + buildings on it; no foreign real-estate market yet |
| Next | Adjacent-lot purchases; citizen lots |
| Later | Cross-town land market + configurable owner/town rules |

## Consequences

- Supersedes “claim radius only” as the end state — parcels are first-class.  
- Building catalog upgrades remain stage-locked; pad footprint fixed; lot size independent.  
- Economy + government interact (property tax, foreign-owner laws, listing permissions).
