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
        LM_ON,   LM_OFF,
        LM_PREV,   LM_NEXT,
        BL_UP,   BL_DOWN
    )
};
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
};