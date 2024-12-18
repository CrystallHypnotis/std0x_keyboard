// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BL] = LAYOUT(
        KC_ESC,     KC_1,      KC_2,       KC_3,           KC_4,     KC_5,     KC_6,
        KC_GRAVE,   KC_Q,      KC_W,       KC_E,           KC_R,     KC_T,     KC_Y,
        KC_TAB,     KC_A,      KC_S,       KC_D,           KC_F,     KC_G, 
        KC_LSFT,    KC_Z,      KC_X,       KC_C,           KC_V,     KC_B,     KC_LEFT,
		KC_LCTL,    KC_APP,    KC_LALT,    KC_BACKSPACE,   KC_SPC,   KC_ENT,
                                                                     MO(_FL),  KC_RGHT,
   

        KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,  KC_EQL,   KC_BACKSPACE,
        KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,  KC_RBRC,  KC_BSLS,
                   KC_H,      KC_J,      KC_K,      KC_L,     _______,  _______,
		KC_N,      KC_M,      _______,   _______,   _______,  _______,  KC_LEFT,
		KC_DOWN,   KC_UP,     KC_RGHT,   _______,   _______,  KC_A,
        _______,   KC_RCTL
    ),
	[_FL] = LAYOUT(
	KC_CALCULATOR, KC_AUDIO_MUTE,
	KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,
	KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE,
	KC_MEDIA_NEXT_TRACK, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______,
	KC_CALCULATOR, KC_AUDIO_MUTE,
	KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,
	KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE,
	KC_MEDIA_NEXT_TRACK, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______, _______,
	_______
	)
	
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(UG_HUED, UG_HUEU),  ENCODER_CCW_CW(UG_SATD, UG_SATU)  },
    [2] = { ENCODER_CCW_CW(UG_VALD, UG_VALU),  ENCODER_CCW_CW(UG_SPDD, UG_SPDU)  },
    [3] = { ENCODER_CCW_CW(UG_PREV, UG_NEXT),  ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif
