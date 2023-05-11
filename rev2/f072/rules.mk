# MCU name
MCU = STM32F072
#BOARD = QMK_PROTON_C
#MCU = STM32F103
#BOARD = stm32duino
#BOARD = STM32_F103_STM32DUINO

# Bootloader selection
BOOTLOADER = stm32-dfu
#DFU_SUFFIX_ARGS = -v FFFF -p FFFF
#DFU_ARGS = -d 1EAF:0003 -a 2 -R
#DFU_SUFFIX_ARGS = -v 1EAF -p 0003

# Use SPI for RGB underglow:
WS2812_DRIVER = spi

# Build Options
#   change yes to no to disable
#
BACKLIGHT_ENABLE = yes
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes   # Mouse keys
EXTRAKEY_ENABLE = yes   # Audio control and System control
CONSOLE_ENABLE = no    # Console for debug
COMMAND_ENABLE = no     # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = yes   # Enable keyboard underlight functionality
LEADER_ENABLE = yes

LAYOUT=LAYOUT_all LAYOUT_tk
