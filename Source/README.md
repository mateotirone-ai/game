# Source/

C++ game module and build targets for **GameName**.

| Path | Purpose |
|------|---------|
| `GameName.Target.cs` | Client/game target (PC) |
| `GameNameEditor.Target.cs` | Editor target |
| `GameNameServer.Target.cs` | Dedicated server target (authoritative multiplayer) |
| `GameName/` | Primary runtime module |

## Rules

- Prefer gameplay systems in Game Feature plugins under `Plugins/GameFeatures/` when the domain is self-contained (Economy, Trade, etc.).
- Keep the primary module thin: bootstrapping, shared types, and cross-feature glue.
- Do not commit compiled binaries (`Binaries/`, `Intermediate/` are gitignored).
- Design authority lives in `Design/` — implement against those specs.
