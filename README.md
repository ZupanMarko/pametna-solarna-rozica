# Pametna solarna rožica
Projekt vključuje izvorne datoteke in programsko kodo za projekt *Pametna solarna rožica* iz Poletne šole strojništva 2025.
Gre za napravo, ki sledi soncu za optimalni izkoristek sončnih celic na vrhu. Rožica vključuje baterijo in vezje za hitro polnjenje mobilnega telefona.

<p align="center">
  <img src="https://github.com/user-attachments/assets/a3a3a2fd-c664-480c-b5bd-be5128690955" width="300" style="display:inline-block; vertical-align:middle;"/>
  <video src="https://github.com/user-attachments/assets/c149758f-b2a8-4514-8fbe-24bb865d2cd1" width="300" controls style="display:inline-block; vertical-align:middle;"></video>
</p>

Projekt vključuje:
* STEP datoteke sestavnih delov
* Altium in gerber datoteke tiskanin
* programsko kodo
* tabelo vseh sestavnih delov (BOM)

<p align="center">
  <img width="701" height="321" alt="Untitled Diagram drawio" src="https://github.com/user-attachments/assets/b4c9a9f2-9e1e-4e2e-b3d8-ecc90a78dad8" />
</p>

# Kosovnica

| Količina | Naziv                          | Tip / specifikacija                 | Opombe                                   | Povezava |
|----------|--------------------------------|--------------------------------------|------------------------------------------|----------|
| 1x       | Solarni panel                  | 25 W, plastičen, 18 V                | Uporaba na prostem                       | [link](https://a.aliexpress.com/_EzS1qQS) |
| 1x       | Li-Ion celica                  | 18650, 3.7 V                         | Brez zaščite, potreben BMS               | [link](https://a.aliexpress.com/_EvOZci2) |
| 1x       | Arduino Nano                   | ATmega328P, USB Mini                 | Klon, 5 V                                | [link](https://a.aliexpress.com/_Ez3uUz9) |
| 1x       | Servo motor                    | 9 g, 180°                            | Klasičen RC mikro servo                  | [link](https://a.aliexpress.com/_EwxFJdM) |
| 1x       | Servo motor (kontinuirni)      | 9 g, 360°                            | Kontinuirna rotacija                     | [link](https://a.aliexpress.com/_EwxFJdM) |
| 1x       | MPPT regulator                 | 18 V vhod                            | Za polnjenje 1S baterije                 | [link](https://a.aliexpress.com/_EH76ZsS) |
| 1x       | Boost pretvornik               | DC–DC step-up                        | 5–12 V izhod                             | [link](https://a.aliexpress.com/_Ev8sKLp) |
| 1x       | BMS modul                      | 1S (3.7 V)                           | Zaščita pred prenapetostjo/praznjenjem   | [link](https://a.aliexpress.com/_EJhuM38) |
| 1x       | USB modul                      | QC 3.0 fast charge                   | 5–12 V izhod                             | [link](https://a.aliexpress.com/_EI1u6Ka) |
| 4x       | Fotoupor                       | GL5516                               | 5–10 kΩ (odvisno od svetlobe)            | [link](https://a.aliexpress.com/_EzRV2TM) |
| 1x       | Kontaktni konektor             | 2-pinski                             | Za povezavo napajanja                    | [link](https://a.aliexpress.com/_Ex5KoGA) |
| 1x       | Nosilec baterije               | 1x 18650                             | S kabli                                  | [link](https://a.aliexpress.com/_EykRIGO) |
| 2x       | Terminal                       | Vijak M3                             | Pritrditev žic                           | [link](https://a.aliexpress.com/_EGEYttG) |
| 1x       | Stikalo                        | Mini toggle                          | ON/OFF                                   | [link](https://a.aliexpress.com/_EIrwWxU) |
| 4x       | Upor                           | 1 kΩ, 1/4 W                          | ±1 %                                     | [link](https://a.aliexpress.com/_EH9VMBM) |
| 4x       | Vijak                          | M3×16, inbus glava                   |                                           | – |
| 2x       | Vijak                          | M3×6, inbus glava                    |                                           | – |
| 1x       | Vijak                          | M4×30, inbus glava                   |                                           | – |
| 4x       | Matica                         | M3                                   |                                           | – |
| 1x       | Matica                         | M4                                   |                                           | – |
| 4x       | Žica tanka                     | 20 cm, cca. 0.2 mm²                  | Lahko parica iz UTP kabla                | – |
| 2x       | Žica srednja                   | 20 cm, 0.75 mm²                      | Lahko zvočniški kabel                    | – |
| 3x       | Samolepilna nogica             | Silikonska                           | Za stabilnost                            | – |


POTREBNA ORODJA:
* 3D tiskalnik in 0,3 kg PLA ali podobnega filamenta
* spajkalnik in spajka
* pištolica na vroče lepilo ali sekundno lepilo
* vrtalnik in sveder 8 mm

OPOMBE:
Za pripravo datotek na 3D tisk se priporoča uporaba slicerja PrusaSlicer, saj lahko direktno uvozi step datoteke.
Za naročilo obeh tiskanih se priporoča JLCPCB zaradi nizke cene in hitre dostave.
