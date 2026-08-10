# RawAssets/

Source art and audio **before** Unreal import. Imported `.uasset` files live under `Content/` or feature plugin `Content/`.

| Folder | Purpose |
|--------|---------|
| `Blender/` | `.blend`, exports staging |
| `Textures/` | Source PNG/TGA/EXR |
| `Audio/` | SFX masters (WAV/Flac) |
| `Music/` | Music sessions / masters |
| `Concepts/` | Concept art references |
| `UI/` | Figma exports, SVG/PSD sources |

Large binaries are tracked with **Git LFS** via root `.gitattributes`. Keep working scratch and autosaves (`*.blend1`) out of git.
