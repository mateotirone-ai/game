# Building

## Intent

**Modular construction** that scales from personal shelter to civic infrastructure, snap-friendly for controller, and economical (materials, labor, upkeep).

## Principles

- **Modules, not freeform mush** — Socketed pieces (foundations, walls, roofs, furniture, machines) with clear snappable grids.
- **Function follows structure** — Workstations and storage are modules with recipes and capacities, not just cosmetics.
- **Settlement vs personal** — Personal claims vs civic plots with permissions and taxes.
- **Repair & upkeep** — Structures degrade or require maintenance under stress/weather/siege rules (tunable).

## Controller-first build UX

- Radial or filtered piece categories.
- Ghost preview with valid/invalid snap colors.
- Hold-to-confirm; modifiers for rotate / variant / material tier.
- “Upgrade in place” where possible to reduce rebuild churn.

## Multiplayer

Server validates placement, materials deduction, and permissions. Clients predict ghosts only. Building pieces are replicated actors or OFPA-friendly partitioned actors.
