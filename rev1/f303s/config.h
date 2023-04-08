/*
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
#include "config_common.h"
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1001
#define DEVICE_VER	0x0001
#define MANUFACTURER    T-H-Un
#define PRODUCT         TH25TK Prototype

#define MATRIX_ROWS 10
#define MATRIX_COLS 5
#define MATRIX_ROW_PINS { A8, A2, B13, B2, B10 }
#define MATRIX_COL_PINS { A10, B5, A3, A4, A5  }
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define BACKLIGHT_PWM_DRIVER  PWMD4
#define BACKLIGHT_PWM_CHANNEL 3
#define BACKLIGHT_PAL_MODE 2
#define BACKLIGHT_PIN B8
#define BACKLIGHT_BREATHING

#define WS2812_SPI SPID1
#define WS2812_SPI_MOSI_PAL_MODE 5

#define RGBLIGHT_ANIMATIONS

#define RGBLED_NUM 4
#define RGB_DI_PIN A7
#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGBLED_SPLIT {4, 4}

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE

#define RGB_MATRIX_KEYPRESSES

//Add for split keyboard
#define MASTER_LEFT
//#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN A9
//#define SERIAL_USART_RX_PIN A10 
#define SERIAL_USART_DRIVER SD1
//#define SERIAL_USART_DRIVER SIOD1
#define SERIAL_USART_TX_PAL_MODE 7
#define SPLIT_USB_DETECT
#define SERIAL_DEBUG

