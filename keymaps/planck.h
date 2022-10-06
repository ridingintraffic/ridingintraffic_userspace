#define LAYOUT_wrapper_ortho_4x12(...) LAYOUT_ortho_4x12(__VA_ARGS__)

#define BASE \
KC_GESC,   _________________QWERTY_L1_________________,  _________________QWERTY_R1_________________,    KC_MINS, \
KC_TAB,    _________________QWERTY_L2_________________,  _________________QWERTY_R2_________________, KC_QUOT, \
KC_LSFT,   _________________QWERTY_L3_________________,  _________________QWERTY_R3_________________,  KC_RSFT, \
KC_NO,   LT(1, KC_LCTL), LT(2, KC_LALT), __THUMBS_3L__, __THUMBS_3R__, LT(1, KC_LCTL), LT(2, KC_LALT), KC_SPC

#define RAISE \
KC_GESC,   _________________QWERTY_L1_________________,  _________________QWERTY_R1_________________,    KC_MINS, \
KC_TAB,    _________________QWERTY_L2_________________,  _________________QWERTY_R2_________________, KC_QUOT, \
KC_LSFT,   _________________QWERTY_L3_________________,  _________________QWERTY_R3_________________,  KC_RSFT, \
KC_NO,  LT(1, KC_LCTL), LT(2, KC_LALT), __THUMBS_3L__, __THUMBS_3R__, LT(1, KC_LCTL), LT(2, KC_LALT), KC_SPC

#define LOWER \
KC_GESC,   _________________QWERTY_L1_________________,  _________________QWERTY_R1_________________,    KC_MINS, \
KC_TAB,    _________________QWERTY_L2_________________,  _________________QWERTY_R2_________________, KC_QUOT, \
KC_LSFT,   _________________QWERTY_L3_________________,  _________________QWERTY_R3_________________,  KC_RSFT, \
KC_NO,  LT(1, KC_LCTL), LT(2, KC_LALT), __THUMBS_3L__, __THUMBS_3R__, LT(1, KC_LCTL), LT(2, KC_LALT), KC_SPC
