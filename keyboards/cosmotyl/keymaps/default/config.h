#define USE_SERIAL

#define MASTER_LEFT
#define TAPPING_TERM 175
#define QUICK_TAP_TERM 80
#define PERMISSIVE_HOLD
#define ACHORDION_STREAK

/** VIA configuration */
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

/** Vial configuration */
#define VIAL_KEYBOARD_UID \
    { 0x53, 0xB8, 0x9C, 0x70, 0xE3, 0x91, 0xF7, 0x8E }
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 0 }
#define VIAL_COMBO_ENTRIES 10

/* Disable action features. */
#define NO_ACTION_MACRO    // Disable old-style macro handling.
#define NO_ACTION_FUNCTION // Disable old-style function handling.
