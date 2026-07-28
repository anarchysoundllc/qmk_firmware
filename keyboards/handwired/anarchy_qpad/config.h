#pragma once

#define EE_HANDS // Store which side I am in EEPROM

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
// This LED blinks when entering bootloader

/* Midi */
#define MIDI_ADVANCED

/*LED Matrix Driver*/
#define I2C_DRIVER I2CD0
#define IS31FL3218_I2C_ADDRESS 0x54
#define I2C1_SCL_PIN GP29
#define I2C1_SDA_PIN GP28
#define IS31FL3218_SDB_PIN GP27
#define IS31FL3218_I2C_TIMEOUT 100
#define IS31FL3218_I2C_PERSISTENCE 0

/*LED EFFECT OPTIONS*/
#define LED_MATRIX_MODE_NAME_ENABLE // enables led_matrix_get_mode_name()
#define LED_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#define LED_MATRIX_DEFAULT_ON true // Sets the default enabled state, if none has been set
#define LED_MATRIX_DEFAULT_VAL 100 // Sets the default brightness value, if none has been set
#define LED_MATRIX_DEFAULT_MODE LED_MATRIX_SOLID // Sets the default mode, if none has been set
#define LED_MATRIX_DEFAULT_SPD 127 // Sets the default animation speed, if none has been set
#define LED_MATRIX_VAL_STEP 20 // The value by which to increment the brightness per adjustment action
#define LED_MATRIX_SPD_STEP 16 // The value by which to increment the animation speed per adjustment action

/*Define the total number of LEDs*/
#define LED_MATRIX_LED_COUNT 6

/*Backlight*/
#define BACKLIGHT_BREATHING