# Contributing

## Before you change gameplay

1. Read `Design/Pillars.md` and the relevant domain doc under `Design/`.
2. If you change durable rules, add or update a file in `Design/Decisions/`.
3. Prefer Game Feature plugins for domain work (`Plugins/GameFeatures/`).

## Branching

- `main` — stable integration branch
- `feature/<short-name>` — features
- `fix/<short-name>` — bugfixes
- `chore/<short-name>` — tooling, repo, docs

Open a **draft PR** early for large work.

## Unreal workflow

1. Pull with Git LFS (`git lfs pull`).
2. Lock binary assets you will edit (`git lfs lock <path>`).
3. Use World Partition / OFPA for map collaboration.
4. Do not commit `Saved/`, `Intermediate/`, `Binaries/`, or local `User*.ini`.
5. Follow naming conventions in `Content/GameName/README.md`.
6. Unlock assets after push.

## Code standards

- C++/Blueprints: clear ownership, replication-aware by default.
- No console SDK includes or binaries in this repository.
- No secrets in Config or scripts — use local ignored overrides.
- Keep primary module thin; put systems in feature plugins.

## Commits & PRs

- Prefer focused commits with rationale in the message body.
- PR description: summary, design links, test plan, screenshots/video for UI.
- CI stubs under `.github/workflows` should stay green when enabled.

## Review checklist

- [ ] Design docs updated if behavior changed
- [ ] Multiplayer authority considered
- [ ] Controller-first UI considered for player-facing changes
- [ ] No generated files, secrets, or SDK material
- [ ] LFS binaries intentionally added (not accidentally huge non-LFS blobs)
