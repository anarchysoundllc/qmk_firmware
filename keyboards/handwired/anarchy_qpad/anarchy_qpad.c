#include "quantum.h"

#ifdef LED_MATRIX_ENABLE
const is31fl3218_led_t PROGMEM g_is31fl3218_leds[IS31FL3218_LED_COUNT] = {
/*   V */
    {0, OUT1}, //KC_1
    {0, OUT2}, //KC_2
    {0, OUT3}, //KC_3
    {0, OUT4}, //KC_4
    {0, OUT5}, //KC_5
    {0, OUT6}  //KC_6
    // etc...
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   0,   1 },
  {   2,   3 },
  {   4,   5 }
}, {
  // LED Index to Physical Position
  { 0,  0 }, { 1,  0 }, { 0,  1 }, { 1,  1 }, {  0,  2 }, {  1,  2 }
}, {
  // LED Index to Flag
  0, 0, 
  0, 0, 
  0, 0
} };
#endif
#define OUT1 0x00
#define OUT2 0x01
#define OUT3 0x02
#define OUT4 0x03
#define OUT5 0x04
#define OUT6 0x05