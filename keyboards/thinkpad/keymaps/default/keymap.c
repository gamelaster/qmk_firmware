#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐
     * │ A │
     * └───┘
     */
    [0] = LAYOUT_all(
        KC_GRAVE, KC_F1, KC_F2, KC_5, KC_6, KC_EQUAL, KC_F8, KC_MINUS, KC_F9, KC_INSERT, KC_DELETE, KC_PGUP, KC_HOME, XXXXXXX/*??*/, XXXXXXX/*??*/, KC_LCTL,
        KC_1, KC_2, KC_3, KC_4, KC_7, KC_8, KC_9, KC_0, KC_F10, KC_F12, KC_F11, KC_PGDN, KC_END, KC_PSCR, XXXXXXX/*??*/, XXXXXXX/*??*/,
        KC_Q, KC_W, KC_E, KC_R, KC_U, KC_I, KC_O, KC_P, XXXXXXX/*??*/, XXXXXXX/*??*/, KC_KB_VOLUME_UP, XXXXXXX/*??*/, XXXXXXX/*??*/, KC_SCROLL_LOCK, XXXXXXX/*??*/, XXXXXXX/*??*/,
        KC_TAB, KC_CAPS, KC_F3, KC_T, KC_Y, KC_RIGHT_BRACKET, KC_F7, KC_LEFT_BRACKET, KC_BACKSPACE, KC_LEFT_GUI, KC_AUDIO_VOL_DOWN, XXXXXXX/*??*/, XXXXXXX/*??*/, XXXXXXX/*??*/, KC_LEFT_SHIFT, XXXXXXX,
        KC_A, KC_S, KC_D, KC_F, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_BACKSLASH, XXXXXXX, KC_KB_MUTE, KC_MENU, XXXXXXX/*??*/, XXXXXXX/*??*/, XXXXXXX/*??*/, XXXXXXX/*??*/,
        KC_ESC, KC_NONUS_BACKSLASH, KC_F4, KC_G, KC_H, KC_F6, XXXXXXX, KC_QUOTE, KC_F5, XXXXXXX/*??*/, XXXXXXX /* IBM -y */, XXXXXXX/*??*/, KC_UP, KC_LEFT_ALT, XXXXXXX/*??*/, XXXXXXX/*??*/,
        KC_Z, KC_X, KC_C, KC_V, KC_M, KC_COMMA, KC_DOT, KC_BACKSLASH, KC_ENTER, KC_F15, XXXXXXX/*KC_Mic*/, XXXXXXX/*KC_PgBk*/, KC_PAUSE, XXXXXXX/*??*/, KC_RIGHT_SHIFT, KC_RIGHT_CTRL,
        XXXXXXX/*??*/, XXXXXXX/*??*/, XXXXXXX/*??*/, KC_B, KC_N, XXXXXXX/*??*/, XXXXXXX/*??*/, KC_SLASH, KC_SPACE, KC_RIGHT, KC_DOWN, /*KC_PgFd*/XXXXXXX, KC_LEFT, KC_RIGHT_ALT, XXXXXXX/*??*/, XXXXXXX/*??*/
        //XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     //    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
     ////   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

    )
};
