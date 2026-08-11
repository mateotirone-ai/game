# Decision: New-player spawn (shared world)

- Status: **Accepted**
- Date: 2026-08-10
- Related: Multiplayer, World, Economy regional specialization, land-parcels

## Decision

### Default spawn

- Brand-new players appear in the **frontier wilderness** and **claim their own starter lot** (not forced immigration).

### Placement goals (spawn algorithm)

When picking a spawn site, prefer:

1. **Away from other players** — room to found without immediate overlap.  
2. **Still reachable** — close enough to travel for **trade** with others / towns.  
3. **Underused biome** — place them in a biome type **others aren’t saturating**, so their local goods **fuel trade** (regional specialization).

Soft failure: if no perfect underused biome exists, pick best available frontier with travel range to markets.

### Not default

- Forced spawn inside an existing town (immigration can be a later optional path).

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | Hand sandbox; ignore multiplayer spawn |
| Next | Offline/dev spawn points |
| Later | Live shared-world spawn scorer (distance + biome scarcity + trade reach) |

## Consequences

- Needs world metrics: player density, biome occupancy, path distance to markets.
- Reinforces “biome goods force trade” fantasy from day one of MP.
