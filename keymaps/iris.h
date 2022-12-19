#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

#define BASE \
QK_GESC,   ________________NUMBER_LEFT________________,                  ________________NUMBER_RIGHT_______________,    KC_GRV, \
QK_GESC,   _________________QWERTY_L1_________________,                  _________________QWERTY_R1_________________,    KC_MINUS, \
KC_TAB,    _________________QWERTY_L2_________________,                  _________________QWERTY_R2_________________, KC_QUOT, \
KC_LSFT,   _________________QWERTY_L3_________________, KC_LBRC,  KC_RBRC,  _________________QWERTY_R3_________________,  KC_RSFT, \
                                                  __THUMBS_3L__, __THUMBS_3R__
