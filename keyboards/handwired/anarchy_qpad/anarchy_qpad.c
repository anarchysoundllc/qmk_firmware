#include "quantum.h"

#ifdef LED_MATRIX_ENABLE
const is31fl3218_led_t PROGMEM g_is31fl3218_leds[IS31FL3218_LED_COUNT] = {
/*   V */
    {OUT1}, //KC_1
    {OUT2}, //KC_2
    {OUT3}, //KC_3
    {OUT4}, //KC_4
    {OUT5}, //KC_5
    {OUT6}  //KC_6
    // etc...
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 0, 1 },
  { 2, 3 },
  { 4, 5 }
}, {
  // LED Index to Physical Position
  { 0,  0 }, { 224,  0 }, 
  { 0,  32 }, { 224,  32 }, 
  { 0,  64 }, { 224,  64 }
}, {
  // LED Index to Flag
  4, 4, 
  4, 4, 
  4, 4
} };
#endif