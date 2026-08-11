# Decision: Diplomacy Depth

- Status: **Accepted**
- Date: 2026-08-10
- Related: Government.md, Combat (war-flag), Trade (tariffs/embargoes), Multiplayer

## Context

Creative settled on **mid depth (B)** for town/player diplomacy (superseding a brief deep/C lean).

## Decision

Diplomacy is a **real mid-weight system**, not thin war-flag-only and not day-one UN simulator:

- **Treaties** — trade preference, non-aggression (NAP), alliance / mutual defense, transit rights.
- **Embassies** (or equivalent diplomat office / diplomacy hall) as the diegetic interface.
- **Embargoes / sanctions / tariffs** as first-class economic instruments.
- **War-flag** remains the gate for claim attacks (already locked).
- **Reputation** between characters and settlements matters for trust and breach fallout.
- **Who may bind the town** is **charter-configurable (C)** — each settlement’s charter defines which office(s) or vote threshold can offer/accept treaties. Defaults can suggest Mayor/Diplomat; towns may rewrite within legal bounds.

### Explicitly later / not mid-core

Deep options (multi-party conferences, vassalage, full charter-foreign entanglement) stay **later aspirational (creative: maybe later)** — do not block mid diplomacy shipping. Un-park only with a new Decision when Town/City politics need them.

### Sequencing

| Phase | Scope |
|-------|--------|
| First Playable | None |
| Next | War-flag + basic peace / hostility state |
| Mid | Treaties, embassy, embargo/tariff tools |
| Later | Optional deep layer (conferences, vassals) — aspirational, not scheduled |

### Authority

Treaty offer/accept/breach, embargo effects, and war declarations are **server-authoritative** with auditable logs.

## Locked interview answers

1. Depth → **B mid** (treaties, embassies, embargoes)
2. Signatories → **C charter-configurable**
3. Vassals / conferences → **later aspirational** (maybe later; not dropped, not promoted)
