/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2022 Mike Engel

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define USE_SERIAL

#ifdef VIA_ENABLE
/* VIA configuration. */
#    define DYNAMIC_KEYMAP_LAYER_COUNT 4
#    define VIAL_TAP_DANCE_ENTRIES 0

#    ifdef VIAL_ENABLE
/** Vial configuration. */
// ESC and ANSI Enter keys
#        define VIAL_KEYBOARD_UID \
            { 0x5B, 0x76, 0x3F, 0xFF, 0xA8, 0x70, 0x33, 0xC8 }
#        define VIAL_UNLOCK_COMBO_ROWS \
            { 0, 2 }
#        define VIAL_UNLOCK_COMBO_COLS \
            { 0, 2 }
#        define VIAL_COMBO_ENTRIES 4
#    endif // VIAL_ENABLE

/* Disable action features. */
#    define NO_ACTION_MACRO    // Disable old-style macro handling.
#    define NO_ACTION_FUNCTION // Disable old-style function handling.
#endif                         // VIA_ENABLE