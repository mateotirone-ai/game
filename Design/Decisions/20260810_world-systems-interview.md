# Decision: World & systems creative interview

- Status: **Accepted**
- Date: 2026-08-10
- Related: `20260810_first-playable.md`, `20260810_phoenix-continuity.md`, Design domain docs

## Context

Creative direction answered the remaining open buckets in a structured interview (settlement failure through monetization). Structural direction records durable locks below. First Playable scope is **not** expanded to ship all of this day one — these guide sequence after Homestead boots.

## Decision

### Settlement health (civ meters)

- Keep up **all** civ aspects: food, upkeep/decay, security, population/morale (and peers as designed).
- Show as **always-on HUD meters** vs **baseline for current stage** (Homestead vs Hamlet vs later) so lack is obvious.
- Failure path: **crisis** (warnings + events) → if ignored, **soft demote** (stage shrinks), not hard wipe.

### Death / phoenix

- Gravestone contains **full carried inventory**.
- Respawn: choose from **map of unlocked hearths**.
- Other players may loot graves **after a timer and/or outside your claim** (not free instant loot inside safe claim).

### Economy / currency

- **One world currency** shared across all civs.
- **Gold-backed** — never minted from thin air.
- Coins created by converting metal at a **Mint** building (gold first; easier than bimetallic for v1).
- Early loop: small **starter purse + selling**; formal minting when Mint exists.
- (Roman silver+gold deferred; gold-only is the easy durable path.)

### Building / claims

- Homestead: **small plot around hearth**, expandable, realistic.
- Growth: **mix of settlement stage + staking** (markers / deeds / coin).

### Community / NPCs

- People arrive when **meters are healthy enough** to attract them (not a free stage gift).
- Early NPCs: **feel alive first**, jobs/labor soon after.

### Multiplayer

- **One shared persistent world** — Eve Online–style map fantasy; anyone who joins is in the same world.
- Claim attack requires **war declaration**.
- **Eve-like security bands** (safer near dense civilization, harsher frontiers).

### Government

- Appears when **realistically necessary** (population + meters demand institutions).
- Voters: **residents / citizens** of the settlement.

### Combat

- Becomes a real game **after Homestead loop is fun**.
- Fantasy: player is **army commander** — train and house soldiers; **first-person Clash of Clans** (base/army from your eyes), not pure FPS deathmatch.

### World generation (macro)

- **Hand-authored continents / choke points / resource belts**; procedural detail inside.
- First Playable remains hand-authored plains crossroads.

### Audio / brand / business

- Music: **cozy day-to-day**, tense when meters/crisis.
- Product name: **decide later** (Aevum remains working label).
- Monetization: **buy once, no pay-to-win**.

## Sequencing (structural)

| Phase | Include |
|-------|---------|
| First Playable | Shelter loop; stockpile; coins exist; Homestead→Hamlet; graves stub OK; meters can be simplified stubs |
| Next | Full meter baselines + crisis; mint; claim expand; attraction NPCs |
| Later | Eve map/security bands; war declare; citizenship votes; army/CoC combat; authored continents |

## Consequences

- Update domain docs (`Economy`, `Government`, `Combat`, `Multiplayer`, `World`) to match when implementing those systems.
- Do not start army combat or full Eve map before Homestead fun + meter readability.
- Hard rule: no P2W power; no thin-air currency.
