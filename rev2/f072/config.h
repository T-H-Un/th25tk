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
//B7,B5 is for Rotary encoder pins
#define DIRECT_PINS {{A15,B3,B9,C14,A0},{A10,B4,C13,C15,A1},{A9,A5,A2,A4,A3},{A8,B13,B11,B2,B0},{B15,B14,B12,B10,B1},{A6,A13,NO_PIN,NO_PIN,NO_PIN}}
#define ENCODERS_PAD_A { B7 }
#define ENCODERS_PAD_B { B5 }

#define DEBOUNCE 5
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define BACKLIGHT_PWM_DRIVER  PWMD1
#define BACKLIGHT_PWM_CHANNEL 1
#define BACKLIGHT_PAL_MODE 2
#define BACKLIGHT_PIN B8
#define BACKLIGHT_BREATHING

#define WS2812_SPI SPID1
#define WS2812_SPI_MOSI_PAL_MODE 5

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

#define RGBLED_NUM 4
#define RGB_DI_PIN A7
#define DRIVER_LED_TOTAL RGBLED_NUM

#define RGB_MATRIX_KEYPRESSES
