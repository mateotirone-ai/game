# Maps

Levels and World Partition maps (prefix `L_`).

**Do not invent `.umap` binaries outside the Unreal Editor.**

## First Playable: `L_DevSandbox`

Plains crossroads sandbox for the Accepted First Playable Decision.

### Author in UE 5.8 (required before meaningful PIE)

1. Open `Aevum.uproject` (compile the `Aevum` module if prompted).
2. **File → New Level → Empty Open World** (or Basic, then enable World Partition later).
3. **File → Save Current Level As…**  
   Path: `Content/Aevum/Maps/L_DevSandbox`
4. Block out a **plains crossroads**:
   - Flat/rolling grass plain (landscape or large floor mesh OK for greybox)
   - Two dirt roads crossing
   - Clear buildable area near the center for a first homestead
   - Optional: distant “what towns become” silhouette (ruined towers / far village meshes) for the endgame diegetic tell
5. Place a **Player Start** at the crossroads facing the buildable plot.
6. World Settings → GameMode Override: `AevumGameModeBase` (or leave default from project settings).
7. **Play (PIE)** — first-person settler should move with WASD/gamepad (boot bindings in `Config/DefaultInput.ini`).
8. Commit the real `.umap` via Git LFS when it exists.

### Also planned

| Map | Purpose |
|-----|---------|
| `L_MainMenu` | Front end (after sandbox boots) |
| `L_DevSandbox` | First Playable loop |

Soft stylized art comes later; greybox readability first.
