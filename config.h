#pragma once

// Common QMK variables
#define TAPPING_TERM 275
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

#ifdef KEYBOARD_lily58
    #include "keymaps/lily58.h"
#endif // KEYBOARD_lily58

#ifdef KEYBOARD_crkbd_rev1
    #include "keymaps/crkbd.h"
#endif // KEYBOARD_crkbd_rev1


#ifdef KEYBOARD_ergodox_ez
    #include "keymaps/ergodox.h"
    #include "version.h"
#endif // KEYBOARD_ergodox_ez

#ifdef KEYBOARD_keebio_iris_rev4
    #include "keymaps/iris.h"
#endif //KEYBOARD_keebio_iris_rev4

#ifdef KEYBOARD_preonic_rev3
    #include "keymaps/preonic.h"
#endif //KEYBOARD_preonic_rev3

#ifdef KEYBOARD_planck_rev6
    #include "keymaps/planck.h"
#endif //KEYBOARD_planck_rev6

#ifdef KEYBOARD_fingerpunch_ffkb_byomcu
    #include "keymaps/ffkb.h"

#endif //KEYBOARD_fingerpunch_sweeeeep
#ifdef KEYBOARD_fingerpunch_sweeeeep
    #include "keymaps/sweep.h"
    #ifdef EE_HANDS
        #undef EE_HANDS
    #endif
    #define MASTER_LEFT
    #ifdef FP_SUPER_TAB
        #undef FP_SUPER_TAB
    #endif


#endif //KEYBOARD_fingerpunch_sweeeeep

#ifdef KEYBOARD_fingerpunch_rockon_v1
    #include "keymaps/rockon.h"

#endif //KEYBOARD_fingerpunch_rockon_v1

#include "wrappers.h"
