# Config/

Committed Unreal configuration for the project.

| File | Purpose |
|------|---------|
| `DefaultEngine.ini` | Maps, rendering, network defaults, hardware targeting |
| `DefaultGame.ini` | Project identity, packaging |
| `DefaultInput.ini` | Enhanced Input defaults (controller-first) |
| `DefaultEditor.ini` | Editor collaboration defaults (e.g. World Partition) |

## Rules

- Do **not** commit secrets, API keys, or local machine overrides.
- Put personal overrides in ignored `*.local` / `User*.ini` files.
- Console platform SDK paths and cert material must never appear here.
- Prefer data-driven tuning in `Content/GameName/Data` over hardcoding gameplay values in ini when possible.
