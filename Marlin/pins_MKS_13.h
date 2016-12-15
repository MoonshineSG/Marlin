/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino Mega with RAMPS v1.4 adjusted pin assignments
 *
 *  MKS v1.3  (Extruder, Fan, Bed)
 *  MKS v1.3  (Extruder, Extruder, Fan, Bed)
 *  MKS v1.4  (Extruder, Fan, Bed)
 *  MKS v1.4  (Extruder, Extruder, Fan, Bed) **
 */

#if HOTENDS > 2
  #error "MKS 1.3/1.4 supports up to 2 hotends. Comment this line to keep going."
#endif

#define BOARD_NAME "MKS > v1.3"

#define LARGE_FLASH true

#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_MIN_PIN           3
#define X_MAX_PIN           -1 //2

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_MIN_PIN          14 
#define Y_MAX_PIN          -1 //15

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30


#define FAN_PIN             9 


#define HEATER_0_PIN       10   // EXTRUDER 1
#define HEATER_1_PIN       7    // EXTRUDER 2

#define TEMP_0_PIN         13   // ANALOG NUMBERING
#define TEMP_1_PIN         14   // ANALOG NUMBERING


#define HEATER_BED_PIN      8   // BED
#define TEMP_BED_PIN       15   // ANALOG NUMBERING

#define PS_ON_PIN          -1
#define LED_PIN            -1

#define BABYSTEP_UP_PIN    2 
#define BABYSTEP_DOWN_PIN  15

#define STAT_LED_RED_PIN 49
#define STAT_LED_BLUE_PIN 0

#define COOLER_FAN_PIN 5
