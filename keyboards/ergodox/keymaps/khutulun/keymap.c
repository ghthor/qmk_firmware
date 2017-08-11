#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"

#define BASE 0
#define CHRD 1

// Unused
#define OSM_LSFT = SFT_T(OSM(MOD_LSFT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  |      |           |      |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |  Grv   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;   |    '   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShft  |Z/Ctrl|   X  |   C  |   V  |   B  | LShf |           | RShf |   N  |   M  |   ,  |   .  |//Ctrl| RShft  |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  [   |      |      |      | LGui |                                       |      |      |      |      |   ]  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        |      |      |       |      |        |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 | Spc  | Bcps |------|       |------|        | Ent  |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */

[BASE] = KEYMAP(
        // left hand
        KC_EQL,         KC_1,         KC_2,    KC_3,    KC_4,    KC_5,   KC_TRNS,
        KC_TAB,         KC_Q,         KC_W,    KC_E,    KC_R,    KC_T,   KC_TRNS,
        KC_GRV,         KC_A,         KC_S,    KC_D,    KC_F,    KC_G,
        KC_LSFT,        CTL_T(KC_Z),  KC_X,    KC_C,    KC_V,    KC_B,   KC_LSFT,
        KC_LBRC,        KC_TRNS,      KC_TRNS, KC_LALT, KC_LGUI,

                                                      KC_TRNS, KC_TRNS,
                                                               KC_TRNS,
                                              KC_SPC, KC_BSPC, KC_TRNS,

        // right hand
        KC_TRNS,      KC_6,    KC_7,     KC_8,    KC_9,    KC_0,           KC_MINS,
        KC_TRNS,      KC_Y,    KC_U,     KC_I,    KC_O,    KC_P,           KC_BSLS,
                      KC_H,    KC_J,     KC_K,    KC_L,    KC_SCLN,        KC_QUOT,
        KC_RSFT,      KC_N,    KC_M,     KC_COMM, KC_DOT,  CTL_T(KC_SLSH), KC_RSFT,
                               KC_RGUI,  KC_RALT, KC_TRNS, KC_TRNS,        KC_RBRC,

        KC_TRNS,  KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_ENT
    ),

/* Keymap 1: Chord Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  |      |           |      |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |  Grv   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;   |    '   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShft  |Z/Ctrl|   X  |   C  |   V  |   B  | LShf |           | RShf |   N  |   M  |   ,  |   .  |//Ctrl| RShft  |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  [   |      |      |      | LGui |                                       |      |      |      |      |   ]  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        |      |      |       |      |        |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 | Spc  | Bcps |------|       |------|        | Ent  |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */

[CHRD] = KEYMAP(
        // left hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

                                                     KC_TRNS, KC_TRNS,
                                                              KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,

        // right hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

        KC_TRNS, KC_TRNS,
        KC_TRNS,
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
