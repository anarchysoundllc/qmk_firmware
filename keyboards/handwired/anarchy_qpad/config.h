#pragma once

#define EE_HANDS // Store which side I am in EEPROM

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
// This LED blinks when entering bootloader

/* Midi */
#define MIDI_ADVANCED

/*LED Driver*/
#define IS31FL3218_SDB_PIN "GP27"
#define IS31FL3218_SCL_PIN "GP29"
#define IS31FL3218_SDA_PIN "GP28"
#define IS31FL3218_I2C_TIMEOUT 100
#define IS31FL3218_I2C_PERSISTENCE 0
#define IS31FL3218_I2C_ADDRESS 0x54

/*Define the total number of LEDs*/
#define LED_COUNT 6