# AGENTS.md — Aevum

Standing orders for AI agents working in this repository. **Think like a game developer** on a UE5 civilization game—not like a generic app engineer.

## What this is

**Aevum** (working title): persistent multiplayer civilization game experienced through an **immortal player character**. Survival, modular building, procedural worlds, settlement growth (village → city), real economics, regional specialization, trade, tech, diplomacy, democracy, cooperation, and conflict. Stylized visuals. Controller-first UI. PC-first; Xbox Series and PS5 later.

## Authority

1. [`Design/`](Design/) is the authoritative game specification.
2. Code and content **implement** Design; they do not silently redefine it.
3. Durable rule changes → new file under [`Design/Decisions/`](Design/Decisions/) using the template there.
4. Pillars in [`Design/Pillars.md`](Design/Pillars.md) win tradeoffs. If a feature fights a pillar, revise or reject it.

## Think like a game developer

- **Player fantasy first** — Immortal continuity and village→city drama beat incomplete system checklists.
- **Vertical slice** — Ship a playable inch of the fantasy before sprawling platforms. One fun loop > five empty frameworks.
- **Systems over scripts** — Prefer interlocking rules that emerge stories; set pieces support systems, they don’t replace them.
- **Feel and readability** — Stylized clarity, telegraphed combat, controller-first UX. If it doesn’t read on a gamepad at gameplay distance, redesign.
- **Honest multiplayer** — Prototype in single-player, but shape inventory, economy, votes, and crafting as **server-authoritative**. No SP-only designs that can’t replicate.
- **Regional identity** — Places should specialize and depend on each other; avoid global magic vendors as the end state.
- **Ask before deleting** — This tree has intentional empty folders and stubs. Don’t “clean up” structure without confirmation.

## Hard constraints

- Do **not** invent or commit binary `.uasset` / `.umap` files from outside the Unreal Editor.
- Do **not** commit console SDKs, NDA material, cert packages, secrets, or `User*.ini` / `.env` with real keys.
- Do **not** break the dedicated-server path (`AevumServer` target, authority assumptions) without a Design Decision.
- Do **not** apply unrelated app-repo conventions from other workspaces—this repo is Aevum only.
- Prefer small, reviewable diffs. No drive-by refactors.

## Where work goes

| Concern | Location |
|---------|----------|
| Domain systems (Economy, Trade, Building, …) | `Plugins/GameFeatures/<Domain>/` |
| Thin primary module / glue | `Source/Aevum/` |
| Maps, UI, characters, data assets | `Content/Aevum/` (naming in `Content/Aevum/README.md`) |
| DCC sources before import | `RawAssets/` |
| Game rules and fantasy | `Design/` |
| Engineering notes (non-design) | `Documentation/` |

## Implementation defaults

- Enhanced Input + CommonUI patterns for player-facing UI.
- Gameplay Tags / DataAssets / DataTables over hardcoded magic numbers when tuning gameplay.
- World Partition / OFPA-friendly map habits for collaboration.
- Replication and RPCs: validate on authority; predict cosmetics only.

## Definition of done (agent tasks)

- [ ] Links to or updates the relevant `Design/` doc (or a Decision)
- [ ] Playable intent is clear—not just scaffolding for scaffolding’s sake
- [ ] Multiplayer authority considered for any sim/economy/inventory change
- [ ] Controller-first considered for any player-facing UX
- [ ] No generated Unreal folders, secrets, or SDK material staged
- [ ] Naming matches `Content/Aevum/README.md` when adding content paths

## Out of scope unless explicitly asked

- Console SDK integration
- Inventing final product name/marketing beyond working title Aevum
- Committing cooked builds, `Binaries/`, `Intermediate/`, `Saved/`, DDC
