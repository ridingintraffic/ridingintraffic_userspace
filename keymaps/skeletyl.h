#define LAYOUT_wrapper_split_3x5_3(...) LAYOUT_split_3x5_3(__VA_ARGS__)
#define MASTER_LEFT

#define BASE \
   _________________QWERTY_L1_________________,              _________________QWERTY_R1_________________,  \
   _________________QWERTY_L2_________________,              _________________QWERTY_R2_________________, \
  _________________QWERTY_L3_________________,              _________________QWERTY_R3_________________,  \
                                __THUMBS_3L__, __THUMBS_3R__
#define RAISE \
  _________________RAISE_L1__________________,              _________________RAISE_R1__________________, \
  _________________RAISE_L2__________________,             _________________RAISE_R2__________________, \
  _________________RAISE_L3__________________,             _________________RAISE_R3__________________, \
                                __THUMBS_3L_RAISE__, __THUMBS_3R_RAISE__
#define LOWER \
 _________________LOWER_L1__________________,             _________________LOWER_R1__________________, \
 _________________LOWER_L2__________________,             _________________LOWER_R2__________________,  \
_________________LOWER_L3__________________,             _________________LOWER_R3__________________, \
                                __THUMBS_3L_LOWER__, __THUMBS_3R_LOWER__
#define NOT_ACTION \
_________________ACTION_L1_________________,              _________________ACTION_R1_________________, \
_________________ACTION_L2_________________,              _________________ACTION_R2_________________, \
_________________ACTION_L3_________________,              _________________ACTION_R3_________________, \
                                __THUMBS_3L_LOWER__, __THUMBS_3R_LOWER__
#define NUMPAD \
_________________ACTION_L1_________________,              _________________NUMPAD_R1_________________, \
_________________ACTION_L2_________________,              _________________NUMPAD_R2________________, \
_________________ACTION_L3_________________,              _________________NUMPAD_R3_________________, \
                                __THUMBS_3L_LOWER__, __THUMBS_3R_NUMPAD__
