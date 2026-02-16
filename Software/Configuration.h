// Impostazione Scheda Madre
#define MOTHERBOARD BOARD_BTT_SKR_V3_0

// Impostazione Sensore Temperatura (NTC 100K B3950 Trianglelab)
#define TEMP_SENSOR_CHAMBER 1 

// Limiti di Sicurezza
#define CHAMBER_HEATER_MAXTEMP 75
#define CHAMBER_MINTEMP 5

// Assegnazione Pin Riscaldatore (Usa l'uscita del Bed per il PTC)
#define HEATER_CHAMBER_PIN HEATER_BED_PIN 

// Abilitazione Controllo PID per la Camera (per temperatura stabile)
#define PIDTEMPCHAMBER
#if ENABLED(PIDTEMPCHAMBER)
  #define DEFAULT_chamberKp 20.00
  #define DEFAULT_chamberKi 1.00
  #define DEFAULT_chamberKd 100.00
#endif

// ABILITAZIONE DISPLAY (Quello che hai trovato tu)
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER