# Decision: First Playable — Frontier Settler Slice

- Status: **Proposed** (awaiting creative direction acceptance)
- Date: 2026-08-10
- Related pillars/docs: `Design/Pillars.md` (1–6), `Design/Vision.md`, `Design/CoreGameplayLoop.md`, `Design/Building.md`, `Design/Economy.md`, `Design/Multiplayer.md`

## Context

The repo is a structural skeleton. Without a locked first playable, agents and humans will sprawl into diplomacy, proc worlds, and combat before anything is fun.

Creative direction owns fantasy and tone. Structural direction locks **scope, sequence, and exit criteria** for the first thing we can PIE and judge.

## Decision

### Fantasy of the first session

You are an **immortal frontier settler**—not a general, not a mayor yet. The feeling: *I am founding a hearth that will outlast me online; my hands make the first surplus.*

Tone: stylized, readable, hopeful grit—not grimdark survival punishment, not city-sim spreadsheet.

### The 15-minute loop (only loop in scope)

1. **Wake in the sandbox** — Possess immortal pawn on `L_DevSandbox` (hand-authored pocket world; not full procgen).
2. **Gather** — Interact with 2–3 resource node types (e.g. wood, stone, forage/food).
3. **Carry** — Items enter a personal inventory (capacity-limited, server-authority-shaped API even in SP).
4. **Build** — Place a small set of snap modules (target: **foundation + wall/roof shelter + one workstation** storage or crafting stub).
5. **Exchange** — Deposit surplus into a **settlement stockpile** and/or complete one trivial local “buy/sell” against a stub market (fixed or simple prices OK for slice).
6. **See growth** — Cross a visible **Camp → Village** threshold (UI + world tell: banner, hearth upgrade, or stage label)—earned by housing + stockpile + basic food security signals, exact numbers tunable in data.

Controller-first: move, look, interact, build place/rotate/cancel, open inventory/stockpile—all remappable Enhanced Input.

### Exit criteria (“fun enough to playtest”)

We call First Playable **done** when a cold player (or Mateo) can, in one PIE session on gamepad:

- [ ] Move and interact without keyboard-only gates
- [ ] Gather → inventory → spend materials on at least one shelter module
- [ ] Contribute to settlement stockpile and notice the economy “exists”
- [ ] Trigger Camp → Village (or equivalent first stage-up) and *feel* progression
- [ ] Quit and re-enter PIE with **persistence of inventory + placed modules + settlement stage** in the local/dev save path (MP-shaped; not “level resets wipe identity”)

Not required for First Playable: multiplayer clients, dedicated server deploy, combat, NPCs with jobs, elections, tech tree UI, caravans, proc world.

### Structural build order (no skipping ahead)

1. Boot: `L_DevSandbox`, PlayerStart, GameMode wired  
2. Characters: immortal pawn + Enhanced Input (controller-first)  
3. Resources: nodes → inventory component/subsystem (authority-shaped)  
4. Building: 3-module kit, snap, material spend  
5. Settlements + tiny Economy: stockpile, stage threshold, stub market  
6. Local persistence for slice state  

Domain code lives under `Plugins/GameFeatures/` (`Characters`, `Resources`, `Building`, `Settlements`, `Economy`). Keep `Source/Aevum/` thin.

### Explicitly out of First Playable

- Full procedural world generation  
- Trade routes, contracts, caravans  
- Government / democracy / offices  
- Diplomacy / treaties / war  
- Combat / death resolution (immortal defeat rules deferred)  
- Businesses with employees / wages  
- Tech tree  
- AIWorld population sim  
- Console targets / platform services  
- Photoreal or large art production—greybox + clear silhouettes OK  

### Open questions (creative can answer anytime; not blockers to start #1–2)

1. Exact resource trio names/fantasy (wood/stone/forage vs something more branded)?  
2. Settlement stage labels: Camp → Village, or different words?  
3. Stub market: barter-only vs simple currency token for the slice?  
4. How “immortal” is shown in UI in the first 15 minutes (title treatment, no death, subtle continuity copy)?  

### Acceptance

- **Proposed** until creative direction comments or edits this file and flips Status to **Accepted**.  
- Structural direction will not expand scope past this Decision without a superseding Decision.

## Consequences

- All feature PRs for the slice must map to the loop above or be rejected as early.  
- Vision’s “full success look” (vote, trade pact, ore neighbor) remains north star—not this milestone.  
- Persistence and inventory APIs must be written as if a server owns them, even when only local.

## Alternatives considered

| Alternative | Why not first |
|-------------|---------------|
| Politics-first (council / vote) | No economic substrate; hollow democracy |
| Combat-first | Wrong fantasy for founding; delays village→city feel |
| Proc world first | High cost, low loop clarity; hand sandbox is enough |
| Full economy + businesses | Too many entities before gather/build feels good |
| Visual vertical slice only (no systems) | Can’t validate immortal / settlement fantasy |
