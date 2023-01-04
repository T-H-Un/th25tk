/* 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "uart.h"
#include "quantum.h"

enum th25tkjp_layers {
  _L1,
  _L2,
  _L3,
  _L4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_L1] = LAYOUT_all( /* Base */
    KC_NUM,  KC_PSLS,  KC_PAST,  KC_PMNS,    TG(_L1),
    KC_P7,   KC_P8,    KC_P9,    KC_BSLS,    TG(_L2),
    KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    MO(_L1),
    KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L2),
    KC_COMM, KC_P0,    KC_PDOT,  KC_ENT,     KC_F5
    ),
  [_L2] = LAYOUT_all(
    KC_NUM,  KC_PSLS,  KC_PAST,  KC_PMNS,    TG(_L1),
    KC_Q,    KC_W,     KC_E,     KC_BSLS,    TG(_L2),
    KC_A,    KC_S,     KC_D,     KC_E,       MO(_L1),
    KC_Z,    KC_X,     KC_C,     KC_V,       MO(_L2),
    KC_COMM, KC_P0,    KC_PDOT,  KC_ENT,     KC_F5
    ),
  [_L3] = LAYOUT_all( 
    KC_NUM,  KC_PSLS,  KC_PAST,  KC_PMNS,    TG(_L1),
    KC_P7,   KC_P8,    KC_P9,    KC_BSLS,    TG(_L2),
    KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    TG(_L3),
    KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   TG(_L4),
    KC_COMM, KC_P0,    KC_PDOT,  KC_ENT,     KC_F5
    ),
  [_L4] = LAYOUT_all(
    KC_NUM,  KC_PSLS,  KC_PAST,  KC_PMNS,    TG(_L1),
    KC_P7,   KC_P8,    KC_P9,    KC_BSLS,    TG(_L2),
    KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    TG(_L3),
    KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   TG(_L4),
    KC_COMM, KC_P0,    KC_PDOT,  KC_ENT,     KC_F5
    ),
};




