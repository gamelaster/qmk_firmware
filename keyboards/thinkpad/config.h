// Copyright 2022 Marek Kraus (@gamelaster)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define RP2040_FLASH_GENERIC_03H

#define RGB_DI_PIN A1

#define PS2_MOUSE_USE_REMOTE_MODE
// #define PS2_DATA_PIN GP14
// #define PS2_CLOCK_PIN GP15


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
