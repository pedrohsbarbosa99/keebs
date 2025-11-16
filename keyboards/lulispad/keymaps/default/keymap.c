#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1, KC_2, KC_NO,
        KC_3, KC_4, KC_5,
        KC_NO, KC_NO, KC_6
    ),
    [1] = LAYOUT(
        KC_1, KC_2, KC_NO,
        KC_3, KC_4, KC_5,
        KC_NO, KC_NO, KC_6
    ),
    [2] = LAYOUT(
        KC_1, KC_2, KC_NO,
        KC_3, KC_4, KC_5,
        KC_NO, KC_NO, KC_6
    ),
    [3] = LAYOUT(
        KC_1, KC_2, KC_NO,
        KC_3, KC_4, KC_5,
        KC_NO, KC_NO, KC_6
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif