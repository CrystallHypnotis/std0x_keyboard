// Copyright 2023 jaros (@jaros)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
// B$ - filler
// Left half should have two fake columns to make left & right matrix equals
#define MATRIX_COL_PINS             { B0,   A7,   A6,   A5,   A4,  A3, A2}
#define MATRIX_ROW_PINS             { B12,  B13,  B14,  A9, B15,  A8}

#define MATRIX_COL_PINS_RIGHT       { B12,  B13,  B14,  B15,  A8,  A9,  A10}
#define MATRIX_ROW_PINS_RIGHT       { B0,   A7,   A6,   A5,   A4,  A3}

#define SOFT_SERIAL_PIN B10
#define SERIAL_USART_DRIVER SD3
#define SPLIT_LAYER_STATE_ENABLE

#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3200

#undef SPLIT_USB_DETECT

//#define SPLIT_USB_DETECT
//#define SPLIT_USB_TIMEOUT 1500

#define MASTER_LEFT

#define SPLIT_HAND_PIN B8

//#define BACKLIGHT_PIN A1
//#define BACKLIGHT_LEVELS 10
//#define BACKLIGHT_BREATHING
//#define BACKLIGHT_DEFAULT_ON true
//#define BACKLIGHT_DEFAULT_BREATHING true
//#define BACKLIGHT_DEFAULT_LEVEL 6

//#define SERIAL_USART_FULL_DUPLEX
//#define HAL_USE_SERIAL TRUE
//#define USE_SERIAL
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