// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │MTE│DFN│RST│
     * ├───┼───┼───┤
     * │CLP│MRK│90s│
     * ├───┼───┼───┤
     * │PRV│PLY│NXT│
     * └───┴───┴───┘


     */
    [0] = LAYOUT_ortho_3x3(
        LCTL(KC_F8),   LCTL(KC_F9),   QK_BOOT,
        LCTL(KC_F11),   LCTL(KC_F12),   LCTL(KC_F10),
        KC_MPRV,   KC_MPLY,   KC_MNXT
    )
};
