# Decision: First Playable — Frontier Settler Slice

- Status: **Accepted** (creative interview 2026-08-10)
- Date: 2026-08-10
- Related pillars/docs: `Design/Pillars.md`, `Design/Vision.md`, `Design/CoreGameplayLoop.md`, `Design/Building.md`, `Design/Economy.md`, `Design/Multiplayer.md`

## Context

Creative direction answered a structured interview. Structural direction locks scope, sequence, and exit criteria so the first PIE build matches that taste—without sprawling into combat polish, politics, or fancy netcode.

**Language note:** Player is **not** an unkillable immortal. Fantasy = **phoenix** (you return; the city endures). Spec language updated in `Design/Decisions/20260810_phoenix-continuity.md`.

## Decision

### Fantasy of the first session

You are a **frontier settler founding a hearth** at a **plains crossroads**. Tone: **cozy**, with **real risk the settlement can fail**. Solo hands for now; community is coming later (do not fake full NPC life in this slice).

Must-nail emotional beat: the player understands the **whole concept / endgame** — not just “I gathered wood.” Deliver via:

1. **Diegetic glimpse** of what towns become (ruins, distant exemplar, monument, map of eras, etc.)
2. **Journal / era foresight UI** after first **Homestead → Hamlet** stage-up

### Player / death

- Death is allowed (**Minecraft-like**).
- Loot/recovery: **gravestones** (grave holds your stuff).
- Settlement buildings, stockpile, and stage **persist** across death.
- Ownership fantasy starts **unclear** — discover who “owns” the town later (not explained day one).

### The 15-minute loop (in scope)

Primary verbs: **gather + build**.

1. First-person wake at plains crossroads sandbox (`L_DevSandbox`, hand-authored).
2. Gather **Timber / Ore / Grain**.
3. **Minecraft-style inventory** (slots + stacks).
4. Build toward **roof / shelter** first — organic town placement (terrain-aware snap/sockets + chunky kits; **not** a pure Minecraft grid; buildings should feel like they follow the land).
5. First exchange: contribute to **hearth stockpile**. Simple **coins** exist. Trader + neighbor barter are **in the fantasy** but not required to finish this slice.
6. Hit **Homestead → Hamlet** with **UI banner** + **new build unlocks**. (NPCs arrive / music sting / landmark change = later.)
7. Journal/era foresight fires; diegetic endgame glimpse is readable in the space.

Controller-first, **clean modern gamepad UI**. Art north star: **soft stylized**.

### Exit criteria

Cold playtest on gamepad can:

- [ ] Move/look/interact in first person with modern gamepad HUD
- [ ] Gather Timber/Ore/Grain into Minecraft-style inventory
- [ ] Place shelter that reads as “home” on natural terrain (not grid-city)
- [ ] Deposit into hearth stockpile; see coins exist
- [ ] Trigger Homestead → Hamlet (banner + unlocks)
- [ ] Receive journal/era foresight and notice a diegetic “what towns become” tell
- [ ] Die → gravestone → recover; settlement still there
- [ ] Re-enter session with persistence of inventory state rules, placed builds, stockpile, stage

### Structural build order

1. Boot: `L_DevSandbox` plains crossroads, GameMode, first-person pawn + Enhanced Input  
2. Inventory (MC-style) + death/gravestone  
3. Resource nodes (Timber/Ore/Grain)  
4. Building kit (shelter-first, terrain-aware placement)  
5. Settlement stage (Homestead→Hamlet) + banner/unlocks  
6. Hearth stockpile + simple coins  
7. Diegetic endgame tell + journal foresight beat  
8. Local persistence for slice state (server-authority-shaped APIs)

Domain code: `Plugins/GameFeatures/` (`Characters`, `Resources`, `Building`, `Settlements`, `Economy`). Thin `Source/Aevum/`.

### Explicitly out of First Playable

- Combat polish (can stub environmental fail without a combat game)  
- Politics / voting / offices  
- Full procedural world  
- Fancy multiplayer/netcode (keep SP authority-shaped)  
- Trader + neighbor barter as required path (later)  
- NPC community arrival as stage-up must  
- Tech tree, war, diplomacy, businesses-with-employees  
- Full water / drought / irrigation sim and mandatory hydration (see `20260810_water.md`; phased later)  
- Full food chain (cooking, diets, spoilage) — Grain stub only in FP (see `20260810_food-chain.md`)  
- Full culture / religion systems (see `20260810_culture-religion.md`; phased later)  

### Creative answer log (source)

| Topic | Answer |
|-------|--------|
| Who | Frontier settler founding a hearth |
| Tone | Cozy |
| Verbs | Gather + build |
| Social | Solo now; community later |
| Pressure | Settlement can fail |
| Exchange order | Stockpile first; trader + neighbor later |
| Money | Simple coins |
| Building | Organic / land-following; not pure grid |
| Home beat | Shelter / roof |
| Place | Plains crossroads |
| Stages | Homestead → Hamlet (real-life ladder) |
| Stage-up must | UI banner + build unlocks |
| Continuity | Phoenix; die; city grows |
| Death loot | Gravestones |
| Ownership | Unclear at first |
| Camera | First person |
| Art | Soft stylized |
| UI | Clean modern gamepad |
| Inventory | Minecraft-style |
| Resources | Timber / Ore / Grain |
| One moment | Sell full concept/endgame (diegetic + journal) |
| Don’t waste early | Combat polish; politics/voting |

## Consequences

- Feature work must map to this loop or be rejected as early.  
- Vision/Pillars use **phoenix continuity** per `20260810_phoenix-continuity.md`.

## Alternatives considered

Rejected as first slice: politics-first, combat-first, proc-world-first, true immortality with no death, pure grid building, community NPCs required on day one.
