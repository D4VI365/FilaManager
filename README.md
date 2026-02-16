# 🚀 5-Spool Heated Drybox & AMS-Ready Controller

This project features an **Active Heated Drybox** designed for 5 filament spools, managed by a **BigTreeTech SKR 3** 3D printer motherboard. The system ensures filaments remain dehumidified and print-ready, with a hardware foundation prepared for future AMS (Automatic Material System) expansion.

---

## 🛠 Technical Specifications
* **Controller:** BigTreeTech SKR 3 (Marlin 2.1.x Firmware).
* **Capacity:** 5 standard spools (up to 200mm diameter).
* **Heating:** 24V PTC Heater with a 5015 Blower Fan for active air circulation.
* **Interface:** LCD 12864 Graphic Display with rotary encoder.
* **Sensor:** Trianglelab NTC 100K B3950 Thermistor (M3 Threaded version).
* **External Electronics:** Housed in a dedicated ventilated base to prevent overheating of the MCU and PSU.

---

## 📂 Repository Structure
* `/CAD`: 3D models (STL/STEP) for the enclosure corners, electronics base, and internal spool rollers.
* `/Firmware`: Pre-configured Marlin source code and compiled `firmware.bin`.

---

## 🔧 Firmware Configuration (Marlin)
The system utilizes a specialized build of Marlin. Key modifications in `Configuration.h` include reassigning the Heated Bed output to drive the Chamber Heater:

```cpp
// Core settings for the Drybox
#define MOTHERBOARD BOARD_BTT_SKR_V3_0
#define TEMP_SENSOR_CHAMBER 1        // NTC 100K B3950
#define HEATER_CHAMBER_PIN HEATER_BED_PIN 

// Display Settings
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER