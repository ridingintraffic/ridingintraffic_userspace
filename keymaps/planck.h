#define LAYOUT_wrapper_planck_2x2u(...) LAYOUT_planck_2x2u(__VA_ARGS__)

#define BASE \
KC_GESC,   _________________QWERTY_L1_________________,  _________________QWERTY_R1_________________,    KC_MINUS, \
KC_TAB,    _________________QWERTY_L2_________________,  _________________QWERTY_R2_________________, KC_QUOT, \
KC_LSFT,   _________________QWERTY_L3_________________,  _________________QWERTY_R3_________________,  KC_RSFT, \
LT(1, KC_LCTL), LT(2, KC_LALT), __THUMBS_PL_3L__, __THUMBS_PL_3R__, LT(1, KC_LCTL), LT(2, KC_LALT)

#define RAISE \
KC_GESC,   _________________RAISE_L1__________________,  _________________RAISE_R1__________________,    KC_MINUS, \
KC_TAB,    _________________RAISE_L2__________________,  _________________RAISE_R2__________________, KC_QUOT, \
KC_LSFT,   _________________RAISE_L3__________________,  _________________RAISE_R3__________________,  KC_RSFT, \
LT(1, KC_LCTL), LT(2, KC_LALT), __THUMBS_PL_3L_RAISE__, __THUMBS_PL_3R_RAISE__, LT(1, KC_LCTL), LT(2, KC_LALT)

#define LOWER \
KC_GESC,   _________________LOWER_L1__________________,  _________________LOWER_R1__________________,    KC_MINUS, \
KC_TAB,    _________________LOWER_L2__________________,  _________________LOWER_R2__________________, KC_QUOT, \
KC_LSFT,   _________________LOWER_L3__________________,  _________________LOWER_R3__________________,  KC_RSFT, \
LT(1, KC_LCTL), LT(2, KC_LALT), __THUMBS_PL_3L_LOWER__, __THUMBS_PL_3R_LOWER__, LT(1, KC_LCTL), LT(2, KC_LALT)
