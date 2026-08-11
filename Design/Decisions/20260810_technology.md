# Decision: Technology / research

- Status: **Accepted**
- Date: 2026-08-10
- Related: Progression.md, building-catalog, Government, Combat

## Decision

### Model

- **Shared settlement tech tree** — unlocks belong to the town, not only one player’s private sheet.
- Research is performed by a **Library / school** building (must already be unlocked/built).
- Research takes **real time** (not instant spend-complete).
- **Settlement stage and tech gate each other** — stage limits which tech tiers you may research; key techs can be required to stage up.
- Tech unlocks a **mix**: recipes/crafting/tools, buildings/building options, and military/army options (branched tree).

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | No full tech UI required; Homestead/Hamlet can stub “library locked” |
| Next | Library building + first research branch + real-time progress |
| Later | Full tree; stage↔tech mutual gates; military branch |

## Consequences

- Add **Library** to building catalog (civic; town land) if not already covered by Era Marker / archive — prefer distinct **Library** family for research.
- `DT_TechTree` data-driven; server-authoritative progress.
- Players in the same settlement share completed nodes.
