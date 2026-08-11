# Economy

## Intent

A **real economy**: scarcity, production chains, labor, prices, businesses, and regional comparative advantage—not an isolated crafting checklist.

## Core entities

- **Resources / goods** — Raw, intermediate, finished; quality tiers optional.
- **Stockpiles** — Personal inventory + upgradable settlement storage buildings (organized; not chest sprawl). Shop local stock + optional stockpile restock.
- **Recipes** — Inputs, time, skill/tech gates, workstation requirements.
- **Businesses** — **Player-owned only** (NPCs may work as operators/employees; they do not found shops).
- **Prices** — Local market clearing with logistics friction; no global magic vendor as end state.

## Food chain

Full chain intent: crops + livestock products + forage/hunt → cooking → meals; diets and spoilage matter at maturity. First Playable keeps **Grain** simple. See `Design/Decisions/20260810_food-chain.md`.

## Population & jobs

Soft population with meters; **jobs are real** and produce for the town; workers are **visible at work**; slots **auto-fill**. Full home→work agent sim optional later. See `Design/Decisions/20260810_population-jobs.md`.

## Regional specialization

Biomes and infrastructure make some goods cheap to produce locally and expensive elsewhere. Specialization should be profitable *and* create interdependence (and leverage in diplomacy).

## Money & value

- **One world currency** across all civilizations.
- **Gold-backed** — never minted from thin air.
- Coins created by converting metal at a **Mint** building.
- Early: starter purse + selling; minting when Mint exists.
- See `Design/Decisions/20260810_world-systems-interview.md`.

Avoid infinite NPC sinks that nullify player markets.

## Authority

Server simulates transfers, crafting completion, and market matches. Clients show predicted UI only.
