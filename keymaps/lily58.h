#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

#define BASE \
KC_GESC,   ________________NUMBER_LEFT________________,                  ________________NUMBER_RIGHT_______________, KC_EQL, \
KC_GESC,   _________________QWERTY_L1_________________,                  _________________QWERTY_R1_________________, KC_MINS, \
KC_TAB,    _________________QWERTY_L2_________________,                  _________________QWERTY_R2_________________, KC_QUOT, \
KC_LSFT,   _________________QWERTY_L3_________________, KC_LBRC,  KC_RBRC,  _________________QWERTY_R3_________________,  KC_BSLS, \
                                 LT(2, KC_LALT), __THUMBS_3L__, __THUMBS_3R__, LT(1, KC_LCTL)

#define RAISE \
KC_GESC,   _________________RAISE_L1__________________,                  _________________RAISE_R1__________________, KC_MINS, \
KC_GESC,   _________________RAISE_L1__________________,                  _________________RAISE_R1__________________, KC_MINS, \
KC_TAB,    _________________RAISE_L2__________________,                  _________________RAISE_R2__________________, KC_QUOT, \
KC_LSFT,   _________________RAISE_L3__________________, KC_LBRC,  KC_MPLY,  _________________RAISE_R3__________________,  KC_BSLS, \
                      KC_LALT,      __THUMBS_3L_RAISE__,                __THUMBS_3R_RAISE__, KC_SPC

#define LOWER \
KC_GESC,   _________________LOWER_L1__________________,                  _________________LOWER_R1__________________, KC_UNDS, \
KC_GESC,   _________________LOWER_L1__________________,                  _________________LOWER_R1__________________, KC_UNDS, \
KC_TAB,    _________________LOWER_L2__________________,                  _________________LOWER_R2__________________, KC_QUOT, \
KC_LSFT,   _________________LOWER_L3__________________, KC_LBRC,  KC_RBRC,   _________________LOWER_R3__________________,  KC_BSLS, \
                        KC_SPC,      __THUMBS_3L_LOWER__,                __THUMBS_3R_LOWER__, KC_SPC
