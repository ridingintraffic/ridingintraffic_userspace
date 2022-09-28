#pragma once

// layer indices
#define DEF 0
#define NAV 1
#define EMJ 2

#define LAYOUT_crkbd_wrapper(...)  LAYOUT_split_3x6_3(__VA_ARGS__)


#define _DEF \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
    KC_ESC,  HM_A,    HM_S,    HM_D,    HM_F,    KC_G,    KC_H,    HM_J,    HM_K,    HM_L,    HM_QUOT, KC_SCLN, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
    _______, _______, _______, GUI_TAB, CTL_ESC, NAV_BSP, SYM_SPC, SFT_ENT, ALT_DEL, _______, _______, _______

#define BASE \
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC, \
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT, \
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC, \
                                          KC_LCTL,   KC_LGUI,  KC_BSPC,     KC_SPC,   KC_ENT, KC_RALT

#define CON \
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC, \
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX, \
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT,   MO(3), KC_RALT

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

#define LILY_BASE \
 // ,-----------------------------------------------------.                    ,------------------------------------------------------.
      KC_GESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, \
//  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL, \
//  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
   MO(_MEDIA),  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
//  |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, TD(TD_RESETLBRC), TD(TD_RESETRBRC),  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_BSLS, \
//  └--------┴--------┴---┬----┴----┬----┴---┬----┴-----┬-┴-------|   |--------┴┬--------┴┬------┴--┬-----┴--┬-----┴--------┴--------|
                           KC_LCTL,  KC_LALT,  KC_LGUI,   KC_BSPC,     KC_SPC,    KC_ENT,   KC_VOLD, KC_VOLU
                       // └---------┴--------┴----------┘---------┘   └---------┴---------┴---------┘--------┘
#define control \
 // ,-----------------------------------------------------.                    ,------------------------------------------------------.
      KC_GRV,   KC_1,   KC_2,  KC_CPYF, KC_CPYP,   KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, \
//  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,  TD(TD_ADPSWD),  DISFACE,  CLOUD,   HEART,    KC_EQL, \
//  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
   MO(_MEDIA),  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                        KC_LEFT, KC_DOWN,  KC_UP,  KC_RIGHT, KC_TRNS, KC_QUOT, \
//  |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,   KC_LBRC,    KC_MPLY,  KC_N,     SHRUG,   FU,  SUNGLASSES, KC_SLSH, KC_BSLS, \
//  └--------┴--------┴---┬----┴----┬----┴---┬----┴-----┬-┴-------|   |--------┴┬--------┴┬------┴--┬-----┴--┬-----┴--------┴--------|
                           KC_LALT,  KC_LCTL,  MO(_PSWD),   KC_DEL,     KC_ENT,  LCTL(KC_LEFT), LCTL(KC_UP), LCTL(KC_RIGHT)
                       // └---------┴--------┴----------┘---------┘   └---------┴---------┴---------┘--------┘
#define emoji \

 // ,-----------------------------------------------------.                    ,------------------------------------------------------.
      KC_GESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, \
//  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y, TD(TD_ADPSWD), TD(TD_ADAPSWD), KC_O, KC_P, KC_EQL, \
//  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
   MO(_MEDIA),  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                        KC_LEFT, KC_DOWN,  KC_UP,  KC_RIGHT, KC_TRNS, KC_QUOT, \
//  |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,   KC_LBRC,    KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_TRNS, \
//  └--------┴--------┴---┬----┴----┬----┴---┬----┴-----┬-┴-------|   |--------┴┬--------┴┬------┴--┬-----┴--┬-----┴--------┴--------|
                           KC_LALT,  KC_LCTL,  MO(_PSWD),   KC_BSPC,      KC_ENT,   KC_MPLY,  KC_VOLU,  KC_VOLD
                       // └---------┴--------┴----------┘---------┘   └---------┴---------┴---------┘--------┘