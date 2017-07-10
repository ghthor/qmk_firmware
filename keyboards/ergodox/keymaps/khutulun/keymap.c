#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"

#define BASE 0
#define NUMB 1

// Unused
#define OSM_LSFT = SFT_T(OSM(MOD_LSFT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |   `    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;   |    '   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShift |Z/Ctrl|   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      | LGui |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        |      |      |       |      |        |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 | Space| BkSp |------|       |------|        |Enter |
 *                                 |      |      | LNum |       | LNum |        |      |
 *                                 `--------------------'       `----------------------'
 */

[BASE] = KEYMAP(
        // left hand
        KC_TRNS,        KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,
        KC_TAB,         KC_Q,         KC_W,    KC_E,    KC_R,    KC_T,   KC_TRNS,
        KC_GRV,         KC_A,         KC_S,    KC_D,    KC_F,    KC_G,
        KC_LSFT,        CTL_T(KC_Z),  KC_X,    KC_C,    KC_V,    KC_B,   KC_TRNS,
        KC_TRNS,        KC_TRNS,      KC_TRNS, KC_TRNS, KC_LGUI,

                                                      KC_TRNS, KC_TRNS,
                                                               KC_TRNS,
                                              KC_SPC, KC_BSPC, MO(NUMB),

        // right hand
        KC_TRNS,      KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,
        KC_TRNS,      KC_Y,    KC_U,     KC_I,    KC_O,    KC_P,           KC_BSLS,
                      KC_H,    KC_J,     KC_K,    KC_L,    KC_SCLN,        KC_QUOT,
        KC_TRNS,      KC_N,    KC_M,     KC_COMM, KC_DOT,  CTL_T(KC_SLSH), KC_RSFT,
                               KC_RGUI,  KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,

        KC_TRNS,  KC_TRNS,
        KC_TRNS,
        MO(NUMB), KC_TRNS, KC_ENT
    ),

/* Keymap 1: Numerals & Symbols
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |   \t*  |   ~  |   !  |  @   |  #   |  $   |  %   |           |  ^   |  &   |  *   |  _   |  =   |  ?   |   |    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |   `    |   0  |   1  |  2   |  3   |  4   |------|           |------|  5   |  6   |  7   |  8   |  9   |   \n*  |
 * |--------+------+------+------+------+------|  -   |           |  +   |------+------+------+------+------+--------|
 * |   '    |   \  |   <  |  (   |  {   |  [   |      |           |      |  ]   |  }   |  )   |  >   |  /   |   "    |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      | LGui |                                       | RGui |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |  ;   |       |  :   |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */

[NUMB] = KEYMAP(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,
       KC_GRV,  KC_0,    KC_1,    KC_2,    KC_3,    KC_4,
       KC_QUOT, KC_BSLS, KC_LABK, KC_LPRN, KC_LCBR, KC_LBRC, KC_MINS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LGUI,

                                           KC_TRNS, KC_TRNS,
                                                    KC_SCLN,
                                  KC_TRNS, KC_TRNS, KC_TRNS,

    // right hand
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_CIRC,  KC_AMPR, KC_ASTR, KC_UNDS, KC_EQL,  KC_QUES, KC_PIPE,
                 KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_TRNS,
       KC_PLUS,  KC_RBRC, KC_RCBR, KC_RPRN, KC_RABK, KC_SLSH, KC_DQUO,
                          KC_RGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

       KC_TRNS, KC_TRNS,
       KC_COLN,
       KC_TRNS, KC_TRNS, KC_TRNS
),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(NUMB)                // FN1 - Momentary Layer 1 (Numerals & Symbols)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          register_code(KC_RSFT);
        } else {
          unregister_code(KC_RSFT);
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case NUMB:
            ergodox_right_led_1_on();
            break;
        default:
            // none
            break;
    }

};
