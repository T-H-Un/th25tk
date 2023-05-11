# MCU name
#MCU = STM32F303
#BOARD = QMK_PROTON_C

MCU = STM32F103
#BOARD = genericSTM32F103C8

# Bootloader selection
BOOTLOADER = stm32duino


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
BACKLIGHT_DRIVER = pwm
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes

OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

LAYOUT=LAYOUT_all LAYOUT_tk
