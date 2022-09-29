#include "quantum.h"
#include <stdio.h>

#include "wrappers.h"
#include "keymaps/lily58.h"

#pragma once

// Common QMK variables
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAP_CODE_DELAY 10

#define KC_CPYP LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen  to clipboard
#define KC_CPYF LGUI(LSFT(LCTL(KC_3)))  // Copy full screen to clipboard
#define KC_CPYPSS LGUI(LSFT(KC_4))  // Copy portion of screen  to desktop
#define KC_CPYFSS LGUI(LSFT(KC_3))  // Copy full screen to desktop

#define KC_ZOOMMUTE LGUI(LSFT(KC_A))  // zoom mute / unmute
#define KC_ZOOMSCREENSHARE LGUI(LSFT(KC_S))  // zoom screenshare start stop
#define KC_ZOOMSCREENSHAREPAUSE LGUI(LSFT(KC_T))  // zoom screenshare pause resume
#define KC_ZOOMVIDEO LGUI(LSFT(KC_V))  // zoom start stop video
