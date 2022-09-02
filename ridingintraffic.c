#define KC_CPYP LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen  to clipboard
#define KC_CPYF LGUI(LSFT(LCTL(KC_3)))  // Copy full screen to clipboard
#define KC_CPYPSS LGUI(LSFT(KC_4))  // Copy portion of screen  to desktop
#define KC_CPYFSS LGUI(LSFT(KC_3))  // Copy full screen to desktop

#define KC_ZOOMMUTE LGUI(LSFT(KC_A))  // zoom mute / unmute
#define KC_ZOOMSCREENSHARE LGUI(LSFT(KC_S))  // zoom screenshare start stop
#define KC_ZOOMSCREENSHAREPAUSE LGUI(LSFT(KC_T))  // zoom screenshare pause resume
#define KC_ZOOMVIDEO LGUI(LSFT(KC_V))  // zoom start stop video

enum custom_keycodes {
    SHRUG = SAFE_RANGE,
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

void tap(uint16_t keycode){
    register_code(keycode);
    unregister_code(keycode);
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            
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
                    SEND_STRING("t(-_-t)");
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
        case TFLIP2:         // ┻━┻︵ \(°□°)/ ︵ ┻━┻
        if(record->event.pressed){
            send_unicode_string("┻━┻︵ \(°□°)/ ︵ ┻━┻");
          }
        return false;
        break;
      }
    }
    return true;
};

void matrix_init_user(void) {
set_unicode_input_mode(UC_OSX);
};

/* tap dance time */
void tdadpswd(qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    SEND_STRING(ADSTRING);
    reset_tap_dance (state);
  } else {
    send_unicode_string("shrug");
    reset_tap_dance (state); 
 }
}
void tdadapswd(qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    SEND_STRING(ADASTRING);
    reset_tap_dance (state);
  } else {
    SEND_STRING(SS_LCTL(SS_LSFT(SS_LGUI("B"))));
    reset_tap_dance (state); 
 }
}
 void tdother(qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    SEND_STRING(OTHERSTRING);
    reset_tap_dance (state);
  } else {
    SEND_STRING(SS_LCTL(SS_LSFT(SS_LGUI("B"))));
    reset_tap_dance (state);
 }
}

void tdresetlbrc(qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    reset_keyboard();
    reset_tap_dance (state);
  } else {
    tap(KC_LBRC);
    reset_tap_dance (state); 
 }
}
void tdresetrbrc(qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    reset_keyboard();
    reset_tap_dance (state);
  } else {
    tap(KC_RBRC);
    reset_tap_dance (state); 
 }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_ADPSWD] = ACTION_TAP_DANCE_FN(tdadpswd),
    [TD_ADAPSWD] = ACTION_TAP_DANCE_FN(tdadapswd),
    [TD_OTHER] = ACTION_TAP_DANCE_FN(tdother),
    [TD_RESETRBRC] = ACTION_TAP_DANCE_FN(tdresetrbrc),
    [TD_RESETLBRC] = ACTION_TAP_DANCE_FN(tdresetlbrc)
};

