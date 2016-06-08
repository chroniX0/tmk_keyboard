
static const uint8_t PROGMEM keymaps[][MATRIX_COLS][MATRIX_ROWS] = {
    /* Layer 0: Standard ANSI layer */
    KEYMAP(\
         ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11,  F12,        PSCR,SLCK,PAUS,                         \
         GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL,BSPC,   INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS, \
         TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,   DEL, END, PGDN,    P7,  P8,  P9,  PPLS, \
         FN7,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,      ENT,                      P4,  P5,  P6,        \
         LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,        UP,           P1,  P2,  P3,  PENT, \
         LCTL,FN0,LALT,               SPC,                RALT,RGUI, FN1,RCTL,   LEFT,DOWN,RGHT,    P0,  PDOT),          \
    /* Layer 1: Media Keys Function layer */
    KEYMAP(\
         TRNS, FN4, FN5,TRNS,TRNS,MPLY,MSTP,MPRV,MNXT,FN3,MUTE,VOLD,VOLU,         WAKE, PWR,SLEP,                         \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,    FN6,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS, \
         CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                      TRNS,TRNS,TRNS,      \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,        TRNS,         TRNS,TRNS,TRNS,TRNS, \
         TRNS,FN9,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,   MRWD,TRNS,MFFD,    TRNS,TRNS),          \
    /* Layer 2: Mac OSX Function layer */
    KEYMAP(\
         ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11,  F12,        PSCR,SLCK,PAUS,                         \
         GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL,BSPC,   INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS, \
         TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,   DEL, END, PGDN,    P7,  P8,  P9,  PPLS, \
         FN7,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,      ENT,                      P4,  P5,  P6,        \
         LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,        UP,           P1,  P2,  P3,  PENT, \
         LCTL,FN8,LALT,               SPC,                RALT,RGUI, FN2,RCTL,   LEFT,DOWN,RGHT,    P0,  PDOT),          \
    /* Layer 3: Mac OSX Media Keys Function layer */
    KEYMAP(\
         TRNS,TRNS,TRNS,TRNS,TRNS,MPLY,MSTP,MRWD,MFFD,FN3,MUTE,VOLD,VOLU,        WAKE,POWER,SLEP,                        \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS, \
         CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                      TRNS,TRNS,TRNS,      \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,        TRNS,         TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,FN10,TRNS,   TRNS,TRNS,TRNS,    TRNS,TRNS)
};

enum macro_id {
    UNLOCKMOUSE,  // Ignore Deactive in Windows program (Actual Multiple Monitors) Ctrl+Alt+Shift+I
    LOCKMOUSE,    // Locks mouse in current application (Actual Multiple Monitors) Ctrl+Alt+Shift+L
};

static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_TOGGLE(1),                     // FN0 - Switch (Layer 1) Media Keys Momentarily
    [1] = ACTION_LAYER_SET(2, ON_PRESS),                  // FN1 - Set (Layer 2) Mac OSX
    [2] = ACTION_LAYER_TAP_TOGGLE(3),                     // FN2 - Toggle (Layer 3) Mac OSX Media Keys Momentarily
    [3] = ACTION_LAYER_SET_CLEAR(0),                      // FN3 - Set Layer0
    [4] = ACTION_MACRO(UNLOCKMOUSE),                      // FN4 - Ignore Deactivation Shortcut in Actual Multiple Monitors
    [5] = ACTION_MACRO(LOCKMOUSE),                        // FN5 - Lock Mouse Shortcut in Actual Multiple Monitors
    [6] = ACTION_MODS_KEY(MOD_LSFT | MOD_LCTL, KC_ESC),   // FN6 - Shift + Ctrl + Esc
    [7] = ACTION_MODS_TAP_TOGGLE(MOD_RCTL),               // FN7 - Toggle Right Ctrl (Teamspeak/Mumble)
    [8] = ACTION_MODS_TAP_TOGGLE(MOD_LGUI),               // FN8 - Toggle Command in OSX (for copying/pasting easier)
	[9] = ACTION_LAYER_TOGGLE(0),                         // FN9 - Toggle Layer 0 (Windows)
	[10] = ACTION_LAYER_TOGGLE(2),                        // FN10 - Toggle Layer 2 (OSX)
};

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case UNLOCKMOUSE:
            return (record->event.pressed ?
                    MACRO( D(LCTRL), D(LALT), D(LSHIFT), D(I), END ) :
                    MACRO_NONE );
        case LOCKMOUSE:
            return (record->event.pressed ?
                    MACRO( D(LCTRL), D(LALT), D(LSHIFT), D(L), END ) :
                    MACRO_NONE );
    }
    return MACRO_NONE;
}