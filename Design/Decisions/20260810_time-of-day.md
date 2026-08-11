# Decision: Time of day

- Status: **Accepted**
- Date: 2026-08-10
- Related: Vision, Accessibility, farms/meters

## Decision

- **Day / night cycle only**.
- **No seasons** simulation for v1 design (farms/meters not season-gated by calendar).
- No full year calendar required for core loops.
- Night can affect visibility, NPC schedules, security feel later — not mandatory for First Playable.

## Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | Simple day/night lighting OK |
| Later | Gameplay effects of night (optional) |

## Consequences

- Do not build seasonal crop calendars until a future Decision supersedes this.
- Library research “real time” uses wall/server time or accelerated game clock — independent of seasons.
