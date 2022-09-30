#define LAYOUT_wrapper_preonic_2x2u(...) LAYOUT_preonic_2x2u(__VA_ARGS__)

#define BASE \
KC_GESC,   ________________NUMBER_LEFT________________,  ________________NUMBER_RIGHT_______________,    KC_GRV, \
KC_GESC,   _________________QWERTY_L1_________________,  _________________QWERTY_R1_________________,    KC_MINS, \
KC_TAB,    _________________QWERTY_L2_________________,  _________________QWERTY_R2_________________, KC_QUOT, \
KC_LSFT,   _________________QWERTY_L3_________________,  _________________QWERTY_R3_________________,  KC_RSFT, \
LT(1, KC_LCTL), LT(2, KC_LALT), __THUMBS_3L__, __THUMBS_3R__, LT(1, KC_LCTL), LT(2, KC_LALT)

