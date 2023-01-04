/* Copyright 2020 QMK
 *
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

/*
 * This file was auto-generated by:
 *    `qmk chibios-confmigrate -i keyboards/handwired/co60/rev7/mcuconf.h -r platforms/chibios/QMK_PROTON_C/configs/mcuconf.h`
 */

#pragma once

#include_next <mcuconf.h>

//Add next line for split keyboard
#undef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE
//#undef STM32_SIO_USE_USART1
//#define STM32_SIO_USE_USART1 TRUE

#undef STM32_GPT_USE_TIM15
#define STM32_GPT_USE_TIM15 FALSE

#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1 FALSE

#undef STM32_PWM_USE_TIM3
#define STM32_PWM_USE_TIM3 FALSE

#undef STM32_SPI_USE_SPI1
#define STM32_SPI_USE_SPI1 TRUE

#undef STM32_SPI_USE_SPI2
#define STM32_SPI_USE_SPI2 FALSE



