# MCU name
#MCU = STM32F303
#BOARD = QMK_PROTON_C

MCU = STM32F103
#BOARD = genericSTM32F103C8

##Change for STM32F103C6T6A
# Bootloader selection
OPT_DEFS += -DBOOTLOADER_STM32DUINO
MCU_LDSCRIPT = STM32F103x6_stm32duino_bootloader
BOARD = STM32_F103_STM32DUINO
BOOTLOADER_TYPE = stm32duino
DFU_ARGS = -d 1EAF:0003 -a 2 -R
DFU_SUFFIX_ARGS = -v 1EAF -p 0003
# LTO is required to fit the firmware into the available 24K of flash
LTO_ENABLE = yes
#Enable EEPROM emuration for STM32F103C6T6A
EEPROM_DRIVER = vendor

# Use SPI for RGB underglow:
#WS2812_DRIVER = spi

# Build Options
#   change yes to no to disable
#
BACKLIGHT_ENABLE = no
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no   # Mouse keys
EXTRAKEY_ENABLE = yes   # Audio control and System control
CONSOLE_ENABLE = no    # Console for debug
COMMAND_ENABLE = no     # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = no   # Enable keyboard underlight functionality
LEADER_ENABLE = yes

OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

LAYOUT=LAYOUT_all LAYOUT_tk


