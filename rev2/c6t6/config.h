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
#define PRODUCT_ID      0x1600
#define DEVICE_VER	0x0001
#define MANUFACTURER    T-H-Un
#define PRODUCT         TH25TK Prototype

#define DIRECT_PINS {{A8,A3,A4,A5,A2},{A15,B3,B4,B5,C13},{C14,C15,B13,A6,B0},{B1,B2,B10,A10,A9},{B15,B14,B12,A1,A0}}

#define DEBOUNCE 5
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

/*This comment out are due to size of EEPROM
#define BACKLIGHT_PIN B8
#define BACKLIGHT_BREATHING
#define WS2812_SPI SPID1
#define WS2812_SPI_MOSI_PAL_MODE 5

#define RGBLIGHT_ANIMATIONS

#define RGB_DI_PIN A7
#define RGBLED_NUM 14
#define DRIVER_LED_TOTAL RGBLED_NUM

#define RGB_MATRIX_KEYPRESSES
*/

//For STM32F103C6T6A's EEPROM
#define FEE_MCU_FLASH_SIZE 32
#define FEE_PAGE_COUNT 2
#define FEE_PAGE_SIZE 1024
