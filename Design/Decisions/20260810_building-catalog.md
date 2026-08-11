# Decision: Building catalog & stage-locked upgrades

- Status: **Proposed** (awaiting creative redline)
- Date: 2026-08-10
- Related: town-building, storage-upgrades, materials-tools, first-playable, World.md stages

## Context

Creative direction: building upgrades track **town stage upgrades** (not a separate arbitrary ladder). Each settlement stage unlocks the next **visual + functional** tier for buildings you already own / can place.

Stages (spine):

1. **Homestead**  
2. **Hamlet**  
3. **Village**  
4. **Town**  
5. **City**

Rule: when the settlement stages up, eligible buildings can be upgraded to that stage’s tier (cost materials/coin). Looks change; stats change.

## Upgrade rule

| Settlement stage | Building tier name | Visual read |
|------------------|--------------------|-------------|
| Homestead | T1 | Rough, timber, pioneer |
| Hamlet | T2 | Settled timber/stone mix |
| Village | T3 | Proper civic craft |
| Town | T4 | Specialized, denser, walls-era |
| City | T5 | Monumental / institutional |

- **All buildings are upgradeable** along this spine (where the family exists at that stage).
- You cannot jump tiers past current settlement stage.
- Demolish still returns partial materials (prior Decision).

---

## Catalog by family

`FP` = needed for First Playable. Others unlock by stage.

### 1. Shelter / Housing

| Building | FP | Role | T1 Homestead | T2 Hamlet | T3 Village | T4 Town | T5 City |
|----------|----|------|--------------|-----------|------------|---------|---------|
| **Settler Shelter** | FP | Your first roof | Lean-to / cabin | Proper cottage | Fine home | Estate wing | Manor / villa |
| **Housing** (town fill) | — | Citizen homes | Tent/hut | Cottage | Row house | Apartment block | Urban housing |

Player places landmarks; town can auto-fill Housing per town-building Decision.

### 2. Civic / Hearth

| Building | FP | Role | T1 | T2 | T3 | T4 | T5 |
|----------|----|------|----|----|----|----|-----|
| **Hearth** | FP | Settlement heart; stage signal | Camp hearth | Stone hearth | Square / plaza hearth | Civic square | Grand forum |
| **Town Hall** | — | Government when needed | — | Meeting shed | Hall | Council hall | Palace / capitol |
| **Notice Board / Charter Post** | — | Info, later votes | Post | Board | Hall annex | Civic kiosk | Archive |

### 3. Storage (organized — no chest sprawl)

| Building | FP | Role | T1 | T2 | T3 | T4 | T5 |
|----------|----|------|----|----|----|----|-----|
| **Stockpile / Warehouse** | FP | Settlement storage + org UI | Open crates / shed | Walled store | Warehouse | Granary complex | Logistics hub |

Capacity, filters, and org features scale with tier.

### 4. Gathering / primary production

| Building | FP | Role | T1 | T2 | T3 | T4 | T5 |
|----------|----|------|----|----|----|----|-----|
| **Lumber Camp** | — | Timber processing | Chop stump | Saw rack | Sawmill | Timber yard | Lumber mill |
| **Farm Plot / Granary Farm** | FP stub | Grain | Dirt plot | Fenced field | Irrigated farm | Estate farm | Agri district |
| **Mine Head** | — | Ore extract | Dig entrance | Timbered shaft | Mine works | Deep works | Industrial mine |
| **Oil Derrick / Seep Works** | — | Oil (biome) | Seep gather | Hand pump | Derrick | Field battery | Refinery feed |
| **Quarry** | — | Stone (slow-renew) | Surface cut | Quarry pit | Cut yard | Stoneworks | Monument quarry |
| **Gold Diggings** | — | Gold for mint | Pan/claim | Diggings | Goldworks | Vault feed | Reserve works |

### 5. Workshops / shops (storefront + production + operator)

| Building | FP | Role | T1 | T2 | T3 | T4 | T5 |
|----------|----|------|----|----|----|----|-----|
| **Workshop** | FP stub | General craft / tools | Bench | Shop shed | Craft hall | Guild workshop | Master works |
| **Blacksmith** | — | Metal tools/parts | Forge pit | Smithy | Forge | Armory forge | Foundry |
| **Bakery / Kitchen** | — | Food products | Camp cook | Bake hearth | Bakery | Food hall | Commissary |
| **General Store** | — | Buy/sell goods | Blanket stall | Shop front | Market shop | Emporium | Exchange floor |
| **Fuel / Refinery Shed** | — | Oil→fuel / charcoal | Fire pit | Char kiln | Fuel shed | Refinery | Energy works |

Each shop tier improves: recipe speed/quality, stock capacity, operator slots, storefront UX.

### 6. Mint & economy civic

| Building | FP | Role | T1 | T2 | T3 | T4 | T5 |
|----------|----|------|----|----|----|----|-----|
| **Mint** | — | Gold → coins | — | Coin press shed | Mint | Civic mint | Central mint |

(No thin-air coins; gold-backed.)

### 7. Roads & infrastructure (placed / filled)

| Piece | FP | Role | Notes |
|-------|----|------|-------|
| **Main Road** | FP greybox | Player-placed | Upgrades visually with stage (dirt → gravel → stone → paved → boulevard) |
| **Alley / Path** | — | Auto-fill | Appears as density rises; style matches stage |

### 8. Security / army (after Homestead fun)

| Building | FP | Role | T1 | T2 | T3 | T4 | T5 |
|----------|----|------|----|----|----|----|-----|
| **Watch Post** | — | Security meter | Stake | Watch hut | Watchtower | Gatehouse | Citadel tower |
| **Barracks** | — | Train/house soldiers (FP CoC army) | — | Muster yard | Barracks | Fortress barracks | Military academy |
| **Wall / Palisade** | — | Defense | — | Palisade | Timber wall | Stone wall | Bastion |

### 9. Knowledge / foresight (endgame tell support)

| Building | FP | Role | T1 | T2 | T3 | T4 | T5 |
|----------|----|------|----|----|----|----|-----|
| **Journal Shrine / Era Marker** | FP light | Diegetic + journal foresight | Cairn / marker | Shrine | Library nook | Archive | Grand library |
| **Vista Monument** | FP optional | “What towns become” silhouette | Standing stone | Overlook | Monument | Spire | Wonder |

---

## First Playable build set (minimum)

Must exist and upgrade at least **T1 → T2** with Homestead → Hamlet:

1. Settler Shelter  
2. Hearth  
3. Stockpile / Warehouse  
4. Farm Plot (stub OK)  
5. Workshop (stub OK)  
6. Main Road (dirt → improved)  
7. Era Marker (light)

Everything else is post-slice.

## Open for creative redline

1. Rename any building families?  
2. Missing must-have building for your fantasy?  
3. Any family that should **not** upgrade every stage (cap early)?  
4. Accept as **Accepted** or request edits?

## Consequences

- Art pipeline: **5 visual tiers** per family that reaches City (or fewer if building unlocks late).
- Data: `DT_Buildings` + stage gates + upgrade costs.
- UI: upgrade prompt when settlement stages and resources allow.
