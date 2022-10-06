#define LAYOUT_wrapper_ergodox_pretty(...) LAYOUT_ergodox_pretty(__VA_ARGS__)

#define BASE \
  KC_EQL,          ________________NUMBER_LEFT________________, KC_NO,             KC_NO, ________________NUMBER_RIGHT_______________, KC_EQL, \
  KC_DEL,          _________________QWERTY_L1_________________, KC_NO,              KC_NO,  _________________QWERTY_R1_________________, KC_MINS, \
  KC_BSPC,         _________________QWERTY_L2_________________, KC_NO,               KC_NO,   _________________QWERTY_R2_________________, KC_QUOT, \
  KC_LSFT,         _________________QWERTY_L3_________________,                               _________________QWERTY_R3_________________, KC_RSFT, \
  KC_SPC, KC_QUOT,     LALT(KC_LSFT), KC_LEFT, KC_RGHT,                                         KC_UP,   KC_DOWN, KC_LBRC, KC_RBRC, KC_SPC, \
                                                ALT_T(KC_APP), KC_LGUI,             KC_LALT, CTL_T(KC_ESC), \
                                                               KC_HOME,             KC_PGUP, \
                                                KC_SPC, KC_BSPC, KC_END,            KC_PGDN, KC_TAB, KC_ENT
