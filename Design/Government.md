# Government & Diplomacy

## Intent

Settlements adopt **institutions**: offices, laws, taxes, and enfranchisement. Diplomacy connects settlements through treaties, reputation, and enforceable agreements.

## Government

- Appears when **realistically necessary** (population + civ meters demand institutions) — not a pure stage checkbox.
- **Voters:** residents / citizens of the settlement.
- **Charters** — Define offices, civic plots, law scope (ownership fantasy starts unclear; discovered over time).
- **Offices** — Mayor, treasurer, marshal, diplomat (names data-driven).
- **Laws** — Tax rates, build codes, militia drafts, market rules, **foreign land-ownership / sale restrictions** (configurable with owner listings; see `Design/Decisions/20260810_land-parcels.md`).
- **Democracy options** — Proposals → debate window → vote → enactment with veto/override variants.

Not every settlement must be democratic; forms have tradeoffs (speed vs legitimacy vs corruption risk).

## Diplomacy

**Mid depth** (see `Design/Decisions/20260810_diplomacy.md`):

- Reputation between characters and settlements.
- Treaties: non-aggression, transit rights, mutual defense, trade preference.
- Embassies / diplomat office as the interface.
- Treaty signers are **charter-configurable** (default lean: mayor/diplomat).
- Sanctions and embargoes as first-class economic instruments.
- Breach consequences: casus belli flags, trust collapse, NPC/AI reactions.
- Vassals / multi-party conferences = late optional, not mid-core.

## Multiplayer integrity

Votes and law changes are server-authoritative with auditable logs. No silent client-side charter edits.
