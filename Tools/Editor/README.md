# Editor tools (run inside Unreal)

## One-click greybox map

Script: [`create_l_dev_sandbox.py`](create_l_dev_sandbox.py)

Builds `Content/Aevum/Maps/L_DevSandbox` with floor, crossroads, light, and Player Start.

### Steps (Windows / UE 5.8)

1. `git pull` so you have this script.
2. Open `Aevum.uproject`.
3. **Edit → Plugins** → search **Python** → enable **Python Editor Script Plugin** → restart editor if asked.
4. **File → Execute Python Script…**
5. Browse to:
   `Tools/Editor/create_l_dev_sandbox.py`
   (inside your project folder)
6. After it runs, click the 3D viewport → **Alt+P** (Play).
7. **WASD** move, mouse look. **Esc** to stop.

You should see grey boxes and daylight — not a black void.
