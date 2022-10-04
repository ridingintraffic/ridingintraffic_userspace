#include "ridingintraffic.h"
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
            tap_code(KC_VOLU);s
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