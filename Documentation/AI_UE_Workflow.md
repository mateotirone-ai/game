# AI + Unreal Engine workflow

How AI agents (Cursor and peers) work on **Aevum** with UE5. AI is a **powerful helper**, not a one-click game creator.

## Partnership split

| Role | Owns |
|------|------|
| **Creative** (you) | Fantasy, taste, playtests, final “is this fun?”, editor art/maps feel |
| **Structural AI** | Design Decisions, C++/systems shape, Config, scripts, build order, debugging guidance |
| **Unreal Editor** (human-run) | Real `.uasset` / `.umap`, PIE, import, cook, packaging |

Durable rules stay in `Design/`. Engineering notes stay here. Standing orders: root `AGENTS.md`.

## What AI does well here

- Interview and lock systems into `Design/Decisions/`
- Implement / extend C++ in `Source/Aevum/` and `Plugins/GameFeatures/`
- Edit `Config/`, docs, Editor **Python / utility scripts** you run inside UE
- Propose greybox steps, First Playable order, data table shapes
- Review logs, compile errors, and design↔code mismatches

## What AI must not do

- Invent or commit binary `.uasset` / `.umap` from outside the Unreal Editor
- Pretend a prompt generated a finished multiplayer civilization game
- Silently redefine Design without a Decision
- Commit console SDKs, secrets, or cooked/Intermediate junk

## Recommended loop

1. **Design first** — lock intent in `Design/` (or a Decision).
2. **Code in repo** — AI implements authority-shaped systems; you review diffs.
3. **You open UE 5.5** — compile `Aevum`, author/update content (start: `L_DevSandbox`).
4. **PIE playtest** — human feel check; report what broke or felt wrong.
5. **Iterate** — AI fixes code/docs; content stays editor-authored.

Boot checklist: [`UE_Boot.md`](UE_Boot.md). Map authoring: [`Content/Aevum/Maps/README.md`](../Content/Aevum/Maps/README.md).

## Optional tighter hooks (later)

| Tier | Setup | AI gain |
|------|--------|---------|
| **Editor Python / EUW** | Script in repo; you run in editor | Greybox sandbox, batch place actors |
| **Remote Control API** | Plugin + running editor | Agent can query/spawn via HTTP while you supervise |
| **Cursor MCP bridge** | Small server wrapping Remote Control | Chat-driven editor ops in-session |

None of these replace human direction, debugging, or design ownership. Megaworld/economy still need server-authoritative code and playtests.

## External AI assets

Meshes, textures, or audio from external generators belong in `RawAssets/` first, then **import in the editor** into `Content/Aevum/` with project naming. Do not drop random binaries straight into git as “done content.”

## Success look

A session where design is clear, code compiles, `L_DevSandbox` PIE walks in first person, and the next vertical-slice feature (inventory, resources, shelter…) is chosen deliberately — not “AI made the whole game overnight.”
