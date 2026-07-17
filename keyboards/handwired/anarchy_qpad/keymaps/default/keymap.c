// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ 1 │ 2 │ 
     * ├───┼───┤
     * │ 3 │ 4 │
     * ├───┼───┤
     * │ 5 │ 6 │
     * ├───┼───┼
     */
    [0] = LAYOUT(
        KC_1,   KC_2,
        KC_3,   KC_4,
        KC_5,   KC_6
    )
},
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
}
};