// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

// clang-format off

#include QMK_KEYBOARD_H

#define ___ KC_TRANSPARENT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_default(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4,
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
        LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G,
        KC_LEFT_SHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B,
        KC_LEFT_CTRL, KC_LEFT_ALT, KC_SPACE, KC_LEFT_CTRL,

        KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BACKSPACE,
        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH,
        KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE, KC_ENTER,
        KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_UP,
        KC_RIGHT_CTRL, MO(2), TG(1), KC_RIGHT_GUI, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [1] = LAYOUT_default(
        ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___,
        KC_SCROLL_LOCK, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___,
        ___, ___, ___, KC_PAGE_UP,

        ___, ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, KC_UP, ___, ___, ___, ___, ___,
        ___, KC_LEFT, KC_DOWN, KC_RIGHT, ___, ___, ___,
        ___, ___, ___, ___, ___, ___,
        KC_PAGE_DOWN, ___, ___, ___, ___, ___, ___
    ),
    [2] = LAYOUT_default(
        ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___, ___, ___,
        ___, ___, ___, ___,

        ___, ___, ___, ___, ___, ___, ___, ___,
        ___, KC_PRINT_SCREEN, KC_SCROLL_LOCK, KC_PAUSE, ___, ___, ___,
        ___, KC_INSERT, KC_HOME, KC_PAGE_UP, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, ___,
        ___, KC_DELETE, KC_END, KC_PAGE_DOWN, ___, ___, ___,
        ___, KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, ___, ___,
        ___, ___, ___, ___, ___, ___, ___
    ),
};
