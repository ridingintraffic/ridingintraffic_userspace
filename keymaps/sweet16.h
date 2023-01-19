#define LAYOUT_wrapper_ortho_4x4(...) LAYOUT_ortho_4x4(__VA_ARGS__)

#define BASE \
KC_7, KC_8,   KC_9,   KC_LBRC, \
KC_4, KC_5,   KC_6,   KC_RBRC, \
KC_1, KC_2,   KC_3,   LGUI(LSFT(KC_A)), \
KC_0, KC_ENT, LT(1, LCTL(KC_LEFT)), KC_LSFT

#define RAISE \
KC_AMPR, KC_ASTR, KC_LPRN,   KC_VOLU, \
KC_DLR,  KC_PERC, KC_CIRC,   KC_VOLD, \
KC_EXLM, KC_AT,   KC_HASH,   LT(1, KC_LCTL), \
KC_RPRN, KC_ENT,  KC_DOT,    LT(1, KC_LCTL)
