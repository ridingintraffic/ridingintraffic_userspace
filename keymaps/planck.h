#define LAYOUT_wrapper_planck_2x2u(...) LAYOUT_planck_2x2u(__VA_ARGS__)

#define BASE \
__BASE_NUMPAD_1_1__,   __BASE_NUMPAD_2_1__,  __BASE_NUMPAD_3_1__, \
__BASE_NUMPAD_1_2__,   __BASE_NUMPAD_2_2__,  __BASE_NUMPAD_3_2__, \
__BASE_NUMPAD_1_3__,   __BASE_NUMPAD_2_3__,  __BASE_NUMPAD_3_3__, \
__BASE_NUMPAD_1_4__,   __BASE_NUMPAD_2_4__,  __BASE_NUMPAD_3_4__

#define RAISE \
QK_GESC,   _________________RAISE_L1__________________,  _________________RAISE_R1__________________,    KC_MINUS, \
KC_TAB,    _________________RAISE_L2__________________,  _________________RAISE_R2__________________, KC_QUOT, \
KC_LSFT,   _________________RAISE_L3__________________,  _________________RAISE_R3__________________,  KC_RSFT, \
LT(1, KC_LCTL), LT(2, KC_LALT), __THUMBS_PL_3L_RAISE__, __THUMBS_PL_3R_RAISE__, LT(1, KC_LCTL), LT(2, KC_LALT)

#define LOWER \
QK_GESC,   _________________LOWER_L1__________________,  _________________LOWER_R1__________________,    KC_MINUS, \
KC_TAB,    _________________LOWER_L2__________________,  _________________LOWER_R2__________________, KC_QUOT, \
KC_LSFT,   _________________LOWER_L3__________________,  _________________LOWER_R3__________________,  KC_RSFT, \
LT(1, KC_LCTL), LT(2, KC_LALT), __THUMBS_PL_3L_LOWER__, __THUMBS_PL_3R_LOWER__, LT(1, KC_LCTL), LT(2, KC_LALT)
