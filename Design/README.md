# Design/ — Authoritative specification

This folder is the **source of truth** for GameName gameplay and product intent. Implementation in `Source/`, `Content/`, and `Plugins/GameFeatures/` should follow these docs.

| Doc | Topic |
|-----|-------|
| [Vision.md](Vision.md) | Fantasy, platforms, non-goals |
| [Pillars.md](Pillars.md) | Tradeoff arbiters |
| [CoreGameplayLoop.md](CoreGameplayLoop.md) | Session / era loops |
| [World.md](World.md) | Procedural world & settlement stages |
| [Building.md](Building.md) | Modular construction |
| [Economy.md](Economy.md) | Goods, businesses, prices |
| [Trade.md](Trade.md) | Routes, contracts, risk |
| [Progression.md](Progression.md) | Player, settlement, tech |
| [Government.md](Government.md) | Democracy, laws, diplomacy |
| [Multiplayer.md](Multiplayer.md) | Authority, persistence, consoles |
| [Combat.md](Combat.md) | Conflict role in the fantasy |
| [Accessibility.md](Accessibility.md) | Input, UI, options |
| [Glossary.md](Glossary.md) | Shared vocabulary |
| [Decisions/](Decisions/) | Dated durable choices |

When code and design diverge, update design via a Decision — do not silently invent systems in C++/Blueprints alone.
