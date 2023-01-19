#define LAYOUT_wrapper_ortho_4x4(...) LAYOUT_ortho_4x4(__VA_ARGS__)

#define BASE \
KC_7, KC_8,   KC_9,   KC_LBRC, \
KC_4, KC_5,   KC_6,   KC_RBRC, \
KC_1, KC_2,   KC_3,   LGUI(LSFT(KC_A)), \
KC_0, KC_ENT, LT(1, LCTL(KC_LEFT)), KC_LSFT

#define RAISE \
KC_GRV,  LGUI(KC_C),    LGUI(KC_V),     KC_VOLU, \
KC_DLR,  LGUI(KC_MINS), LGUI(KC_EQL),   KC_VOLD, \
KC_EXLM, LCTL(KC_LEFT), LCTL(KC_RIGHT), LT(1, KC_LCTL), \
KC_RPRN, KC_ENT,        KC_DOT,         KC_LSFT
