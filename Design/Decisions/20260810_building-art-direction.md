# Decision: Building art / regional design

- Status: **Accepted**
- Date: 2026-08-10
- Related: building-catalog, land-parcels, Vision (soft stylized), materials-tools biomes

## Decision

### Global

- Soft stylized, cozy, controller-readable silhouettes.
- Fixed **building pad** through T1–T5 (taller/denser/richer, not wider).
- Stage material ladder: pioneer timber → timber/stone → dressed craft → specialized → monumental.
- Function must read at a glance (farm vs forge vs warehouse vs hearth).
- **No single-variation buildings.** Every building family ships with **multiple base variants** (different massing/layout/prop dressing on the same pad and function) so towns don’t look stamped. Minimum **3 variants** per family (A/B/C) unless creative exceptions a unique wonder.

### Regional architecture (**B**)

- **Strong regional architecture** by biome — adobe/desert, alpine steep roofs, forest heavy timber, plains homestead, etc.
- **Same pad + same function family** across biomes (a Farm Plot is still a Farm Plot).
- Regions change massing language, roof typology, materials, ornament — not a different building system.
- Upgrade tiers stay stage-locked; regional style persists as the building tiers up.

### Biome systems (placement vs look)

- Look: regional architecture (this Decision).
- Placement: **soft warn + allow** — you can place a Mine/Farm/Oil works in a weak biome; UI warns it’s a poor fit; efficiency/output suffers (forces trade/explore without hard blocks).

## Variation stack (every building)

1. **Base variant** A/B/C+ (required — never just one)  
2. **Regional architecture** kit  
3. **Stage tier** T1–T5  
4. Optional wealth/wear tint  

## Consequences

- Art pipeline: family × **variant** × region × stage (share pads; swap kits).
- Do not invent wholly separate building ID trees per biome.
- Proc/town fill must **pick among variants** so streets feel hand-made.
