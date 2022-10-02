#include "quantum.h"
#include QMK_KEYBOARD_H

#define KC_ZOOMMUTE LGUI(LSFT(KC_A))  // zoom mute / unmute
#define KC_ZOOMSCREENSHARE LGUI(LSFT(KC_S))  // zoom screenshare start stop
#define KC_ZOOMSCREENSHAREPAUSE LGUI(LSFT(KC_T))  // zoom screenshare pause resume
#define KC_ZOOMVIDEO LGUI(LSFT(KC_V))  // zoom start stop video

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
 set_unicode_input_mode(UC_OSX);
};

void tap(uint16_t keycode){
    register_code(keycode);
    unregister_code(keycode);
};


#ifdef ENCODER_ENABLE
_Bool encoder_update_user(uint8_t index, bool clockwise) {
    // default behavior if undefined
    if (index == 0) {
        // Conditional to reverse the direction of encoder number 1
        // The reason I have this is that for some of my boards, it supports two different types of encoders, and they may differ in direction
        #ifdef ENCODERS_A_REVERSE
        if (!clockwise) {
        #else
        if (clockwise) {
        #endif
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
    // Conditional to reverse the direction of encoder number 1
    // The reason I have this is that for some of my boards, it supports two different types of encoders, and they may differ in direction
    #ifdef ENCODERS_B_REVERSE
    if (!clockwise) {
    #else
    if (clockwise) {
    #endif
        tap_code16(C(KC_RGHT));
    }
    else{
        tap_code16(C(KC_LEFT));
    }
    }
    else if (index == 2) {
    #ifdef ENCODERS_C_REVERSE
    if (!clockwise) {
    #else
    if (clockwise) {
    #endif
        tap_code16(C(KC_RGHT));
    } else {
        tap_code16(C(KC_LEFT));
    }
    }

    return true;
}
#endif