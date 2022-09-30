#define LAYOUT_wrapper_ergodox(...) LAYOUT(__VA_ARGS__)

#define BASE \
KC_GESC,   ________________NUMBER_LEFT________________,  KC_SPC,   \
KC_GESC,   _________________QWERTY_L1_________________,  KC_SPC,   \
KC_TAB,    _________________QWERTY_L2_________________,            \
KC_LSFT,   _________________QWERTY_L3_________________, KC_LBRC,   \
KC_TRNS,   KC_TRNS,  KC_LCTL,  KC_LALT,  KC_LGUI, \
KC_TRNS,   KC_TRNS, \
KC_TRNS, \
__THUMBS_3L__, \

KC_TRNS, ________________NUMBER_RIGHT_______________,   KC_MINS,  \
KC_SPC,_________________QWERTY_R1_________________,  KC_EQL,    \
_________________QWERTY_R2_________________,  KC_QUOT,    \
KC_LBRC, _________________QWERTY_R3_________________, KC_BSLS,\
KC_ENT, LCTL(KC_RIGHT),KC_UP,  KC_RIGHT,  KC_CPYP, \
KC_TRNS,   KC_TRNS, \
KC_TRNS, \
__THUMBS_3R__
