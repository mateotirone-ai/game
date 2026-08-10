# Source/

C++ game module and build targets for **Aevum**.

| Path | Purpose |
|------|---------|
| `Aevum.Target.cs` | Client/game target (PC) |
| `AevumEditor.Target.cs` | Editor target |
| `AevumServer.Target.cs` | Dedicated server target (authoritative multiplayer) |
| `Aevum/` | Primary runtime module |

## Rules

- Prefer gameplay systems in Game Feature plugins under `Plugins/GameFeatures/` when the domain is self-contained (Economy, Trade, etc.).
- Keep the primary module thin: bootstrapping, shared types, and cross-feature glue.
- Do not commit compiled binaries (`Binaries/`, `Intermediate/` are gitignored).
- Design authority lives in `Design/` — implement against those specs.
