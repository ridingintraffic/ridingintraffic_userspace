#include "ridingintraffic.h"

#define KC_CPYP LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen  to clipboard
#define KC_CPYF LGUI(LSFT(LCTL(KC_3)))  // Copy full screen to clipboard
#define KC_CPYPSS LGUI(LSFT(KC_4))  // Copy portion of screen  to desktop
#define KC_CPYFSS LGUI(LSFT(KC_3))  // Copy full screen to desktop

#define KC_ZOOMMUTE LGUI(LSFT(KC_A))  // zoom mute / unmute
#define KC_ZOOMSCREENSHARE LGUI(LSFT(KC_S))  // zoom screenshare start stop
#define KC_ZOOMSCREENSHAREPAUSE LGUI(LSFT(KC_T))  // zoom screenshare pause resume
#define KC_ZOOMVIDEO LGUI(LSFT(KC_V))  // zoom start stop video

enum custom_keycodes {
    SHRUG,
    FU,
    HAPPYFACE,
    HEART,
    TFLIP,
    TPUT,
    DISFACE,
    TFLIP2,
    CLOUD,
    SUNGLASSES,
    EPRM,
    QWERTY,
    MEDIA,
    PSWD
};

//Tap Dance Declarations
enum {
  TD_ADPSWD=0,
  TD_ADAPSWD,
  TD_OTHER,
  TD_RESETRBRC,
  TD_RESETLBRC
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CLOUD:       // (っ◕‿◕)っ
                if(record->event.pressed){
                    send_unicode_string("(っ◕‿◕)っ");
                }
                return false;
                break;
            case DISFACE:       // ಠ_ಠ
              if(record->event.pressed){
                  send_unicode_string("ಠ_ಠ");
              }  
              return false;
              break;
            case FU:       // t(-_-t)
                if(record->event.pressed){
                    send_unicode_string("t(-_-t)");
                }
                return false;
                break; 
            case HAPPYFACE:       // ʘ‿ʘ 
                if(record->event.pressed){
                    send_unicode_string("ʘ‿ʘ");
                }
                return false;
                break; 
            case HEART:       // ♥‿♥
                if(record->event.pressed){
                    send_unicode_string("♥‿♥");
                }
                return false;
                break; 
            case SHRUG:         // ¯\_(ツ)_/¯
              if(record->event.pressed){
                send_unicode_string("¯\\_(ツ)_/¯");
                }
          return false;
          break;
            case SUNGLASSES:       //(⌐■_■)
            if(record->event.pressed){
                send_unicode_string("(⌐■_■)");
            }
            return false;
            break;
            case TFLIP:         // (╯°□°)╯ ︵ ┻━┻
        if(record->event.pressed){
                send_unicode_string("(╯°□°)╯ ︵ ┻━┻");
                }
        return false;
        break;
    }
    return process_record_keymap(keycode, record);
}