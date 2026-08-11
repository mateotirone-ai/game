# Build/

Packaging helpers and build documentation hooks.

Unreal's default `.gitignore` excludes most of `Build/` generated output. This folder intentionally tracks:

- `README.md`
- `.gitkeep`
- Future whitelisted files (e.g. `PakBlacklist*.txt`, icons)

Do not commit cooked output, staged builds, or platform SDK packages here.
