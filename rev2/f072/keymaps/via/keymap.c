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
#define HOLD_ON_OTHER_KEY_PRESS

enum th25tkjp_layers {
  _L1,
  _L2,
  _L3,
  _L4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_L1] = LAYOUT_all( /* Base */
    KC_NUM,  KC_PSLS,  KC_PAST,  KC_PMNS,    MO(_L1), KC_VOLU,
    KC_P7,   KC_P8,    KC_P9,    KC_BSLS,    MO(_L2), KC_VOLD,
    KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    MO(_L3),
    KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4),
    KC_COMM, KC_P0,    KC_PDOT,  KC_ENT,     KC_F5
    ),
  [_L2] = LAYOUT_all(
    KC_NUM,  KC_PSLS,  KC_PAST,  KC_PMNS,    MO(_L1), KC_VOLU,
    KC_P7,   KC_P8,    KC_P9,    KC_BSLS,    MO(_L2), KC_VOLD,
    KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    MO(_L3),
    KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4),
    KC_COMM, KC_P0,    KC_PDOT,  KC_ENT,     KC_F5
    ),
  [_L3] = LAYOUT_all( 
    KC_NUM,  KC_PSLS,  KC_PAST,  KC_PMNS,    MO(_L1), KC_VOLU,
    KC_P7,   KC_P8,    KC_P9,    KC_BSLS,    MO(_L2), KC_VOLD,
    KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    MO(_L3),
    KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4),
    KC_COMM, KC_P0,    KC_PDOT,  KC_ENT,     KC_F5
    ),
  [_L4] = LAYOUT_all(
    KC_NUM,  KC_PSLS,  KC_PAST,  KC_PMNS,    MO(_L1), KC_VOLU,
    KC_P7,   KC_P8,    KC_P9,    KC_BSLS,    MO(_L2), KC_VOLD,
    KC_P4,   KC_P5,    KC_P6,    KC_PPLS,    MO(_L3),
    KC_P1,   KC_P2,    KC_P3,    KC_SPACE,   MO(_L4),
    KC_COMM, KC_P0,    KC_PDOT,  KC_ENT,     KC_F5
    ),
};
#if defined(ENCODER_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise){
  keypos_t key;
  if(index==0){
    if(clockwise){
      key.row=5,key.col=1;
    }else{
      key.row=5,key.col=0;
    }
    tap_code(keymap_key_to_keycode(layer_switch_get_layer(key),key));
  }
  return false;
}
#endif
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_L1] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_L2] =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_L3] =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_L4] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif


