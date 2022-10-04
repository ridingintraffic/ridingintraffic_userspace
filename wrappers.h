#pragma once

#define KC_CPYP LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen  to clipboard
#define KC_CPYF LGUI(LSFT(LCTL(KC_3)))  // Copy full screen to clipboard
#define KC_CPYPSS LGUI(LSFT(KC_4))  // Copy portion of screen  to desktop
#define KC_CPYFSS LGUI(LSFT(KC_3))  // Copy full screen to desktop


#define ___________________BLANK___________________       KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO

#define _________________QWERTY_L1_________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define _________________LOWER_L1__________________       KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define _________________LOWER_L2__________________       ___________________BLANK___________________
#define _________________LOWER_L3__________________       KC_SPC, KC_SPC, KC_CPYF, KC_CPYP,   KC_SPC

#define _________________LOWER_R1__________________       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define _________________LOWER_R2__________________       _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR
#define _________________LOWER_R3__________________       _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END

#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0


#define _________________RAISE_L1__________________       ________________NUMBER_LEFT________________
#define _________________RAISE_L2__________________       ___________________BLANK___________________
#define _________________RAISE_L3__________________       ___________________BLANK___________________

#define _________________RAISE_R1__________________       ________________NUMBER_RIGHT_______________
#define _________________RAISE_R2__________________       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______
#define _________________RAISE_R3__________________       _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT

#define __THUMBS_3L__            LT(1, KC_LCTL), KC_LGUI, KC_BSPC
#define __THUMBS_3R__            KC_SPC, KC_ENT, LT(2, KC_LALT)

#define __THUMBS_3L_LOWER__       LT(1, KC_LCTL), KC_LGUI, KC_BSPC
#define __THUMBS_3R_LOWER__      KC_SPC, KC_ENT, LT(2, KC_LALT)

#define __THUMBS_3L_RAISE__      LT(1, KC_LCTL), KC_LGUI, KC_BSPC
#define __THUMBS_3R_RAISE__      KC_SPC, KC_ENT, LT(2, KC_LALT)
