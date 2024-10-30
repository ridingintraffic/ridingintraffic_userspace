#pragma once
#define KC_CPYP LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen
#define KC_CPYW LGUI(LSFT(LCTL(KC_3)))  // Copy whole screen

#define MY_SAFE_RANGE 0
#define Q_ESC      MY_SAFE_RANGE
#define ENTERSHIFT        MY_SAFE_RANGE+1
#define L2COMBO        MY_SAFE_RANGE+2
#define L3COMBO        MY_SAFE_RANGE+3
#define F_SHIFT        MY_SAFE_RANGE+4
#define J_SHIFT        MY_SAFE_RANGE+5
#define ZMMT LGUI(LSFT(KC_A))  // zoom mute / unmute
#define ZMSS LGUI(LSFT(KC_S))  // zoom screenshare start stop
#define ZMSP LGUI(LSFT(KC_T))  // zoom screenshare pause resume
#define ZMSV LGUI(LSFT(KC_V))  // zoom start stop video


#define ___________________BLANK___________________       _______, _______, _______, _______, _______

#define _________________QWERTY_L1_________________       KC_Q,    KC_W,  KC_E,    KC_R,                KC_T
#define _________________QWERTY_L2_________________       LT(3,KC_A), LT(2,KC_S), LT(1,KC_D),    MT(MOD_LSFT, KC_F),    KC_G
#define _________________QWERTY_L3_________________       MT(MOD_LSFT, KC_Z),    KC_X,    KC_C,    KC_V,                KC_B

#define _________________QWERTY_R1_________________       KC_Y,    KC_U,                KC_I,          KC_O,          KC_P
#define _________________QWERTY_R2_________________       KC_H,    MT(MOD_LSFT, KC_J),  LT(1,KC_K),    LT(2,KC_L),    LT(3,KC_QUOT)
#define _________________QWERTY_R3_________________       KC_N,    KC_M,                KC_COMM, KC_DOT,  MT(MOD_LSFT, KC_SLSH)

#define _________________RAISE_L1__________________       QK_GESC, KC_VOLD, KC_VOLU, KC_LCBR, KC_LBRC
#define _________________RAISE_L2__________________       KC_GRV, KC_NO, KC_NO, KC_NO, KC_DQT
#define _________________RAISE_L3__________________       KC_TILDE, _______, KC_CPYW, KC_CPYP, KC_LBRC

#define _________________RAISE_R1__________________       KC_RBRC, KC_RCBR, KC_NO, KC_NO, KC_MPLY
#define _________________RAISE_R2__________________       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_SCLN
#define _________________RAISE_R3__________________       KC_RBRC, KC_MINUS, KC_EQL, KC_PIPE,  KC_BSLS

#define _________________LOWER_L1__________________       ________________NUMBER_LEFT________________
#define _________________LOWER_L2__________________       RGB_TOG, RGB_RMOD, RGB_MOD, RGB_M_P, RGB_SAI
#define _________________LOWER_L3__________________       KC_LCBR, RGB_SAD, KC_CPYW, KC_CPYP,   RGB_SAD

#define _________________LOWER_R1__________________       ________________NUMBER_RIGHT_______________
#define _________________LOWER_R2__________________       _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_COLN
#define _________________LOWER_R3__________________       KC_RCBR, KC_HOME, KC_PGDN, KC_PGUP, KC_END

#define _________________ACTION_L1_________________       ________________SYMBOL_LEFT________________
#define _________________ACTION_L2_________________       RGB_VAI, RGB_HUI, RGB_SAI, RGB_MOD, RGB_VAI
#define _________________ACTION_L3_________________       RGB_VAD, RGB_HUD, RGB_SAD, RGB_RMOD, RGB_VAD

#define _________________ACTION_R1_________________        ________________SYMBOL_RIGHT_______________
#define _________________ACTION_R2_________________        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_EQL
#define _________________ACTION_R3_________________        _______, KC_LEFT, KC_DOWN, KC_UP,   KC_QUOT

#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0

#define ________________SYMBOL_LEFT________________       KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define ________________SYMBOL_RIGHT_______________       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN

#define __THUMBS_3L__            MT(MOD_LSFT, KC_UNDS), KC_LGUI, MT(MOD_MEH, KC_BSPC)
#define __THUMBS_3R__            MT(MOD_MEH, KC_SPC), MT(MOD_HYPR, KC_ENT), MT(MOD_LSFT, KC_MINUS)

#define __THUMBS_3L_RAISE__      KC_LCTL, KC_LALT, KC_DEL
#define __THUMBS_3R_RAISE__      KC_TAB, KC_EQL, KC_PLUS


#define __THUMBS_3L_LOWER__       LT(1, KC_LCTL), KC_LALT, KC_DEL
#define __THUMBS_3R_LOWER__      MT(MOD_MEH, KC_SPC), KC_EQL, KC_PLUS

#define __THUMBS_PL_3L__            LT(2, KC_LCTL), KC_LGUI, KC_BSPC
#define __THUMBS_PL_3R__            KC_SPC, KC_ENT, LT(3, KC_LALT)

#define __THUMBS_PL_3L_RAISE__      LT(2, KC_LCTL), KC_LALT, KC_BSPC
#define __THUMBS_PL_3R_RAISE__      KC_SPC, LCTL(KC_LEFT), LCTL(KC_RIGHT)


#define __THUMBS_PL_3L_LOWER__       LT(2, KC_LCTL), KC_LALT, KC_BSPC
#define __THUMBS_PL_3R_LOWER__      KC_SPC, KC_ENT, LT(3, KC_LALT)

#define __BASE_NUMPAD_1_1__          KC_MPLY, KC_VOLD,   KC_VOLU,  KC_NO
#define __BASE_NUMPAD_1_2__          ZMMT,    ZMSV,      ZMSS,     ZMSP
#define __BASE_NUMPAD_1_3__          KC_CPYW,    KC_CPYP,      KC_NO,     KC_NO
#define __BASE_NUMPAD_1_4__          KC_LCTL, KC_LGUI,   KC_LALT,  KC_NO

#define __BASE_NUMPAD_2_1__          KC_7, KC_8,   KC_9,      KC_PLUS
#define __BASE_NUMPAD_2_2__          KC_4, KC_5,   KC_6,      KC_MINUS
#define __BASE_NUMPAD_2_3__          KC_1, KC_2,   KC_3,      KC_ENTER
#define __BASE_NUMPAD_2_4__          KC_0, KC_DOT, LT(2,KC_ENTER), LT(1,KC_ENTER)

#define __BASE_NUMPAD_3_1__          LCTL(KC_A), LCTL(KC_E),  KC_PGUP, KC_PGDN 
#define __BASE_NUMPAD_3_2__          KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
#define __BASE_NUMPAD_3_3__          KC_NO,   KC_NO,   KC_NO,   KC_NO
#define __BASE_NUMPAD_3_4__          KC_NO,   KC_NO,   KC_NO,   KC_NO


#define __RAISE_NUMPAD_1__
#define __RAISE_NUMPAD_2__
#define __RAISE_NUMPAD_3__
#define __RAISE_NUMPAD_4__

#define __LOWER_NUMPAD_1__
#define __LOWER_NUMPAD_2__
#define __LOWER_NUMPAD_3__
#define __LOWER_NUMPAD_4__