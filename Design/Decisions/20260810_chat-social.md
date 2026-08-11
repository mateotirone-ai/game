# Decision: Chat & Social

- Status: **Accepted**
- Date: 2026-08-11
- Related: Multiplayer, Diplomacy, Accessibility, console later

## Context

Creative specified communication explicitly (not A/B/C menu):

- **Global chat**
- **Private message** option
- **In-game proximity voice chat**

## Decision

### Text

- **Global chat** — server/realm-wide text channel (moderation/rate limits required on megaworld).
- **Private messages** — direct player-to-player text.
- Town/local channels and diplomacy mail are **not required for the core lock**.
- **Later (A/C):** add **town/local text channel** and a **diplomacy/mail inbox** as phased social tools — optional depth after core chat ships.

### Voice

- **Proximity voice** in-world — hear players near you; falloff with distance. Not mandatory always-on party VoIP as the core fantasy.
- Mute/block/deaf controls and push-to-talk defaults for controller comfort and safety.

### Constraints

- Moderation tools, report, mute/block on both text and voice.
- Console platforms later: respect platform party/voice policies via interfaces; no SDK in repo now.
- Private worlds may simplify (global = that world).

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | Optional stub / none required |
| Next | Global text + PM |
| Mid | Proximity voice |
| Later | Town/local channel + diplomacy/mail inbox |

## Locked interview answers

1. Comms → **global text + PM + proximity voice**
2. Extras → **A/C** core enough now; town channel + diplomacy mail later
