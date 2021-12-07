#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
  KC_ESC,   KC_Q, KC_D, KC_W, KC_R, KC_W,                         KC_J, KC_F, KC_U,    KC_P,   KC_SCLN, KC_QUOTE,
  KC_TAB,   KC_A, KC_S, KC_H, KC_T, KC_G,                         KC_Y, KC_N, KC_E,    KC_O,   KC_I,    KC_ENT,
  KC_SHIFT, KC_Z, KC_X, KC_M, KC_C, KC_V,                         KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH, GUI_ON,
            KC_LALT, LT(2,KC_SPC), KC_LGUI,                    KC_BSPC, KC_, KC_,
                        KC_LCTL, MO(2),                              DF(1), KC_A
  
  ),

  [1] = LAYOUT(
  KC_ESC,   KC_Q, KC_W, KC_E, KC_R, KC_T,                         KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_QUOTE,
  KC_TAB,   KC_A, KC_S, KC_D, KC_F, KC_G,                         KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_ENT,
  KC_SHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B,                         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, GUI_ON,
                KC_LCTL, KC_SPC, MO(2),                             KC_BSPC, KC_, KC_,
                        KC_LALT, LT(2,KC_SPC),                       DF(0), KC_A
  ),

  [2] = LAYOUT(
   KC_GRV,   KC_1,    KC_2,    KC_3,  KC_4,    KC_5,                    KC_6, KC_7, KC_8,    KC_9,   KC_0,  KC_PSCR,
   KC_DEL,   KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_LPRN,                 KC_RPRN, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSLS,
   KC_TRANS, KC_1,    KC_1,    KC_9,  KC_MINS, KC_LBRC,                 KC_RBRC, KC_EQL, KC_COMM, KC_DOT, KC_SLSH, GUI_ON,
                       KC_TRANS, KC_TRANS, KC_TRANS,                     KC_TRANS, KC_TRANS, KC_TRANS,
                          KC_TRANS, KC_TRANS,                              KC_TRANS, KC_TRANS

  )

};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 0:
            set_led_off;
            break;
        case 1:
            set_led_green;
            break;
        default:
            break;
    }
  return state;
}


