# Decision: Irrigation — steal-from-games un-park proposal

- Status: **Proposed** (awaiting creative pick)
- Date: 2026-08-11
- Related: `20260810_water.md`, food-chain, building catalog (Farm irrigated tiers), pollution

## Context

Irrigation was **parked (D)** with permission to copy proven games. This is the structural un-park proposal.

## Shortlist (what to steal)

| Game | Steal | Skip |
|------|--------|------|
| **Minecraft** | Hoe→farmland; wet farmland grows faster; simple readable wet/dry | Infinite source quirks; hydrate *through* solid blocks with no ditch |
| **Timberborn** | Water **flows** in dug channels from a source; blocked ditch = dry downstream | Beaver-only fantasy; full 3D fluid obsession day one |
| **Oxygen Not Included / Satisfactory** | Pumps, pipes, throughput later | Pipe spaghetti as the *early* farm fantasy |
| **City-builders / farming sims** | Irrigation radius / district reach as soft UI read | Magic radius with no visible water path |

## Structural recommendation (steal-first prototype)

**Timberborn-lite flow + Minecraft wet-farm readability.**

1. **Dig irrigation channels** (trench tool) — your locked fantasy.
2. **Source required** — river, lake, spring, or well/cistern **outlet**. No floating infinite wetness.
3. **Flow** — water propagates along connected channels with a simple downhill / connected-path rule (server tick). Break the ditch or dry the source → downstream farms dry.
4. **Wet fields** — Farm plots adjacent to a **flowing** channel (or natural floodplain/riverbank) become hydrated → growth/yield bonus (MC-like outcome).
5. **Early gates** — ditch tool + river/well outlet after Homestead fun; arid biomes need this sooner.
6. **Later ladder** — pumps, aqueducts, cistern pressure (ONI/Satisfactory depth) once ditches are fun.
7. **Pollution hook** — polluted source can hydrate but apply crop/health penalties when pollution ships.

### Explicitly not v1

- Full Navier–Stokes fluids
- MC infinite source duplication
- Pipe networks as the first irrigation toy

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | Visual water only |
| Next | Drink + canteen (already locked) |
| Mid prototype | Dig ditch + source→flow→wet farm |
| Later | Pumps/aqueducts, drought, watershed politics |

## Creative pick (reply in chat)

- **A) Accept recommendation** — Timberborn-lite ditches + MC wet farms  
- **B) MC-near** — wet radius from any water tile (faster to build; weaker “dig channel” fantasy)  
- **C) Pipes-first** — ONI/Satisfactory early (heavier)  
- **D) Stay parked** — revisit again later  
- **E) Something else / blend**
