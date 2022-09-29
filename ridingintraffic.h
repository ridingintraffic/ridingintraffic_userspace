#pragma once

// Common QMK variables
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAP_CODE_DELAY 10

#include "wrappers.h"

#ifdef KEYBOARD_lily58
    #include "keymaps/lily58.h"
#endif // KEYBOARD_lily58