# This file intentionally left blank
TMK_COMMON_DEFS += -Wno-array-bounds -DPICO_RP2040_USB_DEVICE_ENUMERATION_FIX=1
# PS2_MOUSE_ENABLE = yes
# PS2_ENABLE = yes
# PS2_DRIVER = vendor
# PS2_MOUSE_USE_REMOTE_MODE = yes
# SRC += matrix.c
# CUSTOM_MATRIX = yes
OPT_DEFS += -DHAL_USE_I2C=TRUE -DHAL_USE_PWM=TRUE
QUANTUM_LIB_SRC += i2c_master.c
