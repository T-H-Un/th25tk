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

enum th25tkjp_layers {
  _L1,
  _L2,
  _L3,
  _L4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_L1] = LAYOUT_all( /* Base */
    KC_1,   KC_2,    KC_3,    KC_4,    KC_5,  KC_6,   KC_7,    KC_8,    KC_9,    KC_0,
    KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,  KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,   KC_S,    KC_D,    KC_F,    KC_G,  KC_H,   KC_J,    KC_K,    KC_L,    KC_ENT,
    KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
    KC_LCTL,KC_LGUI,KC_LALT,  KC_ENT,  KC_SPC,KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4)
    ),
  [_L2] = LAYOUT_all(
    KC_1,  KC_2,  KC_3,  KC_4,   KC_5,   KC_6,  KC_7,  KC_8,  KC_9,   KC_0,
    KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,  KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,
    KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    MO(_L3),KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    MO(_L3),
    KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4),KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4),
    KC_COMM, KC_P0,    KC_PDOT,  KC_ENT,     KC_F5,KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4)
    ),
  [_L3] = LAYOUT_all( 
    KC_1,  KC_2,  KC_3,  KC_4,   KC_5,   KC_6,  KC_7,  KC_8,  KC_9,   KC_0,
    KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,  KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,
    KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    MO(_L3),KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    MO(_L3),
    KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4),KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4),
    KC_COMM, KC_P0,    KC_PDOT,  KC_ENT,     KC_F5,KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4)
    ),
  [_L4] = LAYOUT_all(
    KC_1,  KC_2,  KC_3,  KC_4,   KC_5,   KC_6,  KC_7,  KC_8,  KC_9,   KC_0,
    KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,  KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,
    KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    MO(_L3),KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    MO(_L3),
    KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4),KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4),
    KC_COMM, KC_P0,    KC_PDOT,  KC_ENT,     KC_F5,KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4)
    ),
};
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
