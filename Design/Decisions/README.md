# Design Decisions

Record durable choices here as short markdown files:

`YYYYMMDD_short-title.md`

## Template

```md
# Decision: Title

- Status: Proposed | Accepted | Superseded
- Date:
- Related pillars/docs:

## Context
## Decision
## Consequences
## Alternatives considered
```

## Active decisions

- [20260810_first-playable.md](20260810_first-playable.md) — First Playable scope (**Accepted**)
- [20260810_phoenix-continuity.md](20260810_phoenix-continuity.md) — Phoenix language (**Accepted**)
- [20260810_world-systems-interview.md](20260810_world-systems-interview.md) — World/systems locks (**Accepted**)
- [20260810_town-building-expansion.md](20260810_town-building-expansion.md) — Town building/shops (**Accepted**)
- [20260810_materials-tools.md](20260810_materials-tools.md) — Materials/tools (**Accepted**)
- [20260810_storage-building-upgrades.md](20260810_storage-building-upgrades.md) — Storage + universal building upgrades (**Accepted**)
- [20260810_building-catalog.md](20260810_building-catalog.md) — Full building list + stage upgrades (**Accepted**)
- [20260810_building-art-direction.md](20260810_building-art-direction.md) — Regional architecture (**Accepted**)
- [20260810_technology.md](20260810_technology.md) — Settlement tech / Library research (**Accepted**)
- [20260810_capital-outposts.md](20260810_capital-outposts.md) — Capital + hard-claim outposts (**Accepted**)
- [20260810_new-player-spawn.md](20260810_new-player-spawn.md) — Frontier spawn for trade biomes (**Accepted**)
- [20260810_time-of-day.md](20260810_time-of-day.md) — Day/night only, no seasons (**Accepted**)
- [20260810_animals.md](20260810_animals.md) — Livestock + wildlife; frontier-varies threat (**Accepted**)
- [20260810_water.md](20260810_water.md) — Full water + contextual hydration; irrigation parked (**Accepted**)
- [20260810_food-chain.md](20260810_food-chain.md) — Full food chain; Village+ diets (**Accepted**)
- [20260810_trade-caravans.md](20260810_trade-caravans.md) — Haul/caravans; Eve-like route risk (**Accepted**)
- [20260810_army-combat.md](20260810_army-combat.md) — Militia pool + hire escorts; gated offense (**Accepted**)
- [20260810_diplomacy.md](20260810_diplomacy.md) — Mid diplomacy; charter-gated signers (**Accepted**)
- [20260810_population-jobs.md](20260810_population-jobs.md) — Soft pop; real visible jobs (**Accepted**)
- [20260810_culture-religion.md](20260810_culture-religion.md) — No culture/religion systems (**Accepted**; reversed)
- [20260810_justice-crime.md](20260810_justice-crime.md) — Courts/trials; fines only, no jail (**Accepted**)
- [20260810_character-customization.md](20260810_character-customization.md) — Deep creator + uniforms later (**Accepted**)
- [20260810_lore-narrative.md](20260810_lore-narrative.md) — Heavy story; player-authored (**Accepted**)
- [20260810_win-condition.md](20260810_win-condition.md) — Soft victories; endless world (**Accepted**)
- [20260810_online-model.md](20260810_online-model.md) — Private worlds + optional megaworld (**Accepted**)
- [20260810_chat-social.md](20260810_chat-social.md) — Global chat, PM, proximity voice (**Accepted**)
- [20260810_difficulty.md](20260810_difficulty.md) — Private sliders; megaworld fixed (**Accepted**)
- [20260810_modding.md](20260810_modding.md) — Mod hooks after core ships (**Accepted**)
- [20260810_pollution.md](20260810_pollution.md) — Real pollution + cleanup/tech (**Accepted**)
- [20260810_alliances.md](20260810_alliances.md) — Alliance orgs parked; treaty pacts OK (**Accepted**)
- [20260810_numeric-thresholds.md](20260810_numeric-thresholds.md) — Stage/grave/band numbers (**Partial**)
- [20260810_irrigation-proposal.md](20260810_irrigation-proposal.md) — Steal-from-games irrigation (**Proposed**)
- [20260810_land-parcels.md](20260810_land-parcels.md) — Lots vs buildings / real estate (**Accepted**)

## Open questions to resolve soon

- ~~Exact Homestead → Hamlet~~ → building-gated (core builds + road stub); session-length costs
- ~~Grave loot timer / claim rules~~ → **D** claim-safe; outside lootable (despawn/delay data-tune)
- ~~Security-band thresholds~~ → **A** High / Low / Null (density formulas data-tune)
- ~~Army sizes / CoC-like combat cadence~~ → size = pop + Barracks; train locals or recruit abroad (wave minutes data-tune)
- Irrigation un-park — pick A–E in `20260810_irrigation-proposal.md`
