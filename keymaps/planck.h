#define LAYOUT_wrapper_ortho_4x12(...) LAYOUT_ortho_4x12(__VA_ARGS__)

#define BASE \
KC_GESC,   _________________QWERTY_L1_________________,  _________________QWERTY_R1_________________,    KC_MINS, \
KC_TAB,    _________________QWERTY_L2_________________,  _________________QWERTY_R2_________________, KC_QUOT, \
KC_LSFT,   _________________QWERTY_L3_________________,  _________________QWERTY_R3_________________,  KC_RSFT, \
KC_SPC, LT(1, KC_LCTL), LT(2, KC_LALT), __THUMBS_3L__, __THUMBS_3R__, LT(1, KC_LCTL), LT(2, KC_LALT),KC_SPC

#define PLOVER \
    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1   , \
    XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, \
    XXXXXXX, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    EXT_PLV, XXXXXXX, XXXXXXX, KC_C,    KC_V,    KC_N,    KC_M,    XXXXXXX, XXXXXXX, XXXXXXX
