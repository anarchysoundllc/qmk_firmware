#pragma once

#define EE_HANDS // Store which side I am in EEPROM

/* Keyboard matrix assignments */
#define MATRIX_ROW_PINS { GP8, GP6, GP4 }
#define MATRIX_COL_PINS { GP2, GP29 }

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
// This LED blinks when entering bootloader

/* Midi */
#define MIDI_ADVANCED

/*LED Driver*/
#define IS31FL3218_SDB_PIN {GP26}
#define IS31FL3218_I2C_TIMEOUT 100
#define IS31FL3218_I2C_PERSISTENCE 0
#define MY_I2C_ADDRESS 0x54

/*Define the total number of LEDs*/
#define DRIVER_LED_TOTAL 6

/*Backlight*/
#define BACKLIGHT_LEVELS 5
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6
#define BACKLIGHT_LIMIT_VAL 255
#define BACKLIGHT_DEFAULT_ON
#define BACKLIGHT_DEFAULT_BREATHING
#define BACKLIGHT_DEFAULT_LEVEL