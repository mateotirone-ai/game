# UE Boot — open Aevum and PIE

Structural checklist for getting a first-person settler walking in the editor. Creative content still comes from you; maps must be authored in Unreal (no fake `.umap` in git).

## Prerequisites

- Unreal Engine **5.5**
- Git LFS (`git lfs install` && `git lfs pull`)
- Windows: VS 2022 with C++ game workload  
  macOS: Xcode (if targeting Mac editor builds)

## Open

1. Double-click [`Aevum.uproject`](../Aevum.uproject) (or right-click → Generate project files, then open).
2. Let the `Aevum` module compile.
3. Confirm project GameMode is `AevumGameModeBase` (DefaultEngine.ini already points here).
4. Default pawn is `AAevumSettlerCharacter` (first-person camera).

## Create the sandbox map

Follow [`Content/Aevum/Maps/README.md`](../Content/Aevum/Maps/README.md) to author `L_DevSandbox` (plains crossroads + Player Start).

Until that map exists, the editor may warn that `/Game/Aevum/Maps/L_DevSandbox` is missing — create it before expecting a clean PIE.

## Smoke test

- [ ] Editor opens without compile errors  
- [ ] `L_DevSandbox` saved under `Content/Aevum/Maps/`  
- [ ] PIE: look + move (mouse/gamepad)  
- [ ] No console SDK / secrets in the tree  

## Next after boot

Per First Playable build order: Minecraft-style inventory + gravestones → Timber/Ore/Grain nodes → shelter building → Homestead→Hamlet → stockpile/coins → endgame tell + journal.
