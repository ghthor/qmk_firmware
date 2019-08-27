#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"
#include "version.h"

#define BASE 0
#define WOWW 1
#define SYSK 2
#define CHRD 3

// Unused
#define OSM_LSFT = SFT_T(OSM(MOD_LSFT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  | Esc  |           |      |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |  Grv   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;   |    '   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShft  |Z/Ctrl|   X  |   C  |   V  |   B  | LShf |           | RShf |   N  |   M  |   ,  |   .  |//Ctrl| RShft  |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  [   |      |      | LAlt | LGui |                                       | RGui | RAlt |      |      |   ]  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        | Del  |      |       |      |        |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Left |       |  Up  |        |      |
 *                                 | Spc  | Bcps |------|       |------|        | Ent  |
 *                                 |      |      | Down |       | Rght |        |      |
 *                                 `--------------------'       `----------------------'
 */

[BASE] = LAYOUT_ergodox(
        // left hand
        KC_EQL,         KC_1,         KC_2,    KC_3,    KC_4,    KC_5,   KC_ESC,
        KC_TAB,         KC_Q,         KC_W,    KC_E,    KC_R,    KC_T,   KC_TRNS,
        KC_GRV,         KC_A,         KC_S,    KC_D,    KC_F,    KC_G,
        KC_LSFT,        CTL_T(KC_Z),  KC_X,    KC_C,    KC_V,    KC_B,   KC_LSFT,
        KC_LBRC,        KC_TRNS,      KC_TRNS, KC_LALT, KC_LGUI,

                                                      KC_DEL , KC_PGDN,
                                                               KC_LEFT,
                                              KC_SPC, KC_BSPC, KC_DOWN,

        // right hand
       TG(WOWW),      KC_6,    KC_7,     KC_8,    KC_9,    KC_0,           KC_MINS,
       MO(SYSK),      KC_Y,    KC_U,     KC_I,    KC_O,    KC_P,           KC_BSLS,
                      KC_H,    KC_J,     KC_K,    KC_L,    KC_SCLN,        KC_QUOT,
        KC_RSFT,      KC_N,    KC_M,     KC_COMM, KC_DOT,  CTL_T(KC_SLSH), KC_RSFT,
                               KC_RGUI,  KC_RALT, KC_TRNS, KC_TRNS,        KC_RBRC,

        KC_PGUP, KC_TRNS,
        KC_UP,
        KC_RGHT, KC_TRNS, KC_ENT
    ),

/* Keymap 1: Wow Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |  F1  |  F2  |  F3  |   7  |   8  | Esc  |           |      |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Tab   |   Q  |   W  |   E  |   5  |   6  |      |           |      |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|  0   |           |      |------+------+------+------+------+--------|
 * |  Grv   |   A  |   S  |   D  |   3  |   4  |------|           |------|   H  |   J  |   K  |   L  |  ;   |    '   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShft  |Z/Ctrl|   X  |   C  |   1  |   2  |  9   |           | RShf |   N  |   M  |   ,  |   .  |//Ctrl| RShft  |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  [   | F4   | LCtl | LAlt | LGui |                                       | RGui | LAlt |      |      |   ]  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        |  Del | PgDn |       | PgUp |        |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Left |       |  Up  |        |      |
 *                                 | Spc  | Bcps |------|       |------|        | Ent  |
 *                                 |      |      | Down |       | Rght |        |      |
 *                                 `--------------------'       `----------------------'
 */

[WOWW] = LAYOUT_ergodox(
        // left hand
        KC_TRNS,   KC_F1,   KC_F2,   KC_F3,    KC_7,    KC_8, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_5,    KC_6,    KC_0,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_3,    KC_4,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_1,    KC_2,    KC_9,
        KC_TRNS, KC_TRNS, KC_LCTL, KC_TRNS, KC_TRNS,

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

[SYSK] = LAYOUT_ergodox(
        // left hand
         KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

                                                     KC_TRNS, KC_TRNS,
                                                              KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,

        // right hand
          KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    ),

[CHRD] = LAYOUT_ergodox(
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
    [1] = ACTION_LAYER_TAP_TOGGLE(CHRD)                // FN1 - Momentary Layer 1 (Numerals & Symbols)
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
        case CHRD:
            ergodox_right_led_1_on();
            break;
        default:
            // none
            break;
    }

};
