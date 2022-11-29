#define LAYOUT_wrapper_ffkb(...) LAYOUT_ffkb(__VA_ARGS__)

#define BASE \
KC_GESC,   _________________QWERTY_L1_________________,                  _________________QWERTY_R1_________________, KC_EQUAL, \
KC_TAB,    _________________QWERTY_L2_________________,                  _________________QWERTY_R2_________________, KC_QUOT, \
KC_LSFT,   _________________QWERTY_L3_________________,                  _________________QWERTY_R3_________________,  KC_BSLS, \
                        KC_SPC,      __THUMBS_3L__,                      __THUMBS_3R__, KC_SPC, \
                                                              KC_SPC

#define RAISE \
KC_GESC,   _________________RAISE_L1__________________,                  _________________RAISE_R1__________________, KC_MINUS, \
KC_TAB,    _________________RAISE_L2__________________,                  _________________RAISE_R2__________________, KC_QUOT, \
KC_LSFT,   _________________RAISE_L3__________________,                  _________________RAISE_R3__________________,  KC_BSLS, \
                      KC_SPC,      __THUMBS_3L_RAISE__,                __THUMBS_3R_RAISE__, KC_SPC, \
                                                             KC_SPC

#define LOWER \
KC_GESC,   _________________LOWER_L1__________________,                  _________________LOWER_R1__________________, KC_UNDS, \
KC_TAB,    _________________LOWER_L2__________________,                  _________________LOWER_R2__________________, KC_QUOT, \
KC_LSFT,   _________________LOWER_L3__________________,                  _________________LOWER_R3__________________,  KC_BSLS, \
                        KC_SPC,      __THUMBS_3L_LOWER__,                __THUMBS_3R_LOWER__, KC_SPC, \
                                                             KC_SPC
#define NOT_ACTION\
KC_TILD,   _________________ACTION_L1_________________,              _________________ACTION_R1_________________,    KC_MINUS, \
KC_TAB,    _________________ACTION_L2_________________,              _________________ACTION_R2_________________, KC_QUOT, \
KC_LSFT,   _________________ACTION_L3_________________,              _________________ACTION_R3_________________,  KC_BSLS, \
                              KC_SPC,  __THUMBS_3L_LOWER__, __THUMBS_3R_LOWER__, KC_SPC,KC_SPC


