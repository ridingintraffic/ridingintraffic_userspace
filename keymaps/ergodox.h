#define LAYOUT_wrapper_ergodox_pretty(...) LAYOUT_ergodox_pretty(__VA_ARGS__)

#define BASE \
  KC_EQL,          KC_1,        KC_2,          KC_3,    KC_4,    KC_5,    KC_LEFT,              KC_RGHT,      KC_6,    KC_7,    KC_8,    KC_9,              KC_0,           KC_MINS, \
  KC_DEL,          KC_Q,        KC_W,          KC_E,    KC_R,    KC_T,    KC_SPC,             KC_SPC,     KC_Y,    KC_U,    KC_I,    KC_O,              KC_P,           KC_BSLS, \
  KC_BSPC,         KC_A,        KC_S,          KC_D,    KC_F,    KC_G,                                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SPC, GUI_T(KC_QUOT), \
  KC_LSFT,         CTL_T(KC_Z), KC_X,          KC_C,    KC_V,    KC_B,    ALL_T(KC_NO),                  MEH_T(KC_NO), KC_N,    KC_M,    KC_COMM, KC_DOT,           CTL_T(KC_SLSH), KC_RSFT, \
  KC_SPC, KC_QUOT,     LALT(KC_LSFT), KC_LEFT, KC_RGHT,                                              KC_UP,   KC_DOWN, KC_LBRC, KC_RBRC, KC_SPC, \
                                                           ALT_T(KC_APP), KC_LGUI,                KC_LALT, CTL_T(KC_ESC), \
                                                                          KC_HOME,                 KC_PGUP, \
                                                         KC_SPC, KC_BSPC, KC_END,                  KC_PGDN, KC_TAB, KC_ENT 
