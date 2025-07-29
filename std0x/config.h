// Copyright 2023 jaros (@jaros)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
// B$ - filler

#define MATRIX_COL_PINS             { B0,   A7,   A6,   A5,   A4,  A3, A2}
#define MATRIX_ROW_PINS             { B12,  B13,  B14,  A9, B15,  A8}

#define MATRIX_COL_PINS_RIGHT       { B12,  B13,  B14,  B15,  A8,  A9,  A10}
#define MATRIX_ROW_PINS_RIGHT       { B0,   A7,   A6,   A5,   A4,  A3}


// encoder without _RIGHT is left (default side)
#define ENCODER_A_PINS { B6 }
#define ENCODER_B_PINS { B7 }
#define ENCODER_RESOLUTION 2  
#define ENCODER_MAP_KEY_DELAY 10


#define MOUSEKEY_DELAY	            1	       Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL	        25	   	   Time between cursor movements in milliseconds
#define MOUSEKEY_MOVE_DELTA	        3	       Step size
#define MOUSEKEY_MAX_SPEED	        4	       Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX	    10	       Time until maximum cursor speed is reached
#define MOUSEKEY_WHEEL_DELAY	    2	       Delay between pressing a wheel key and wheel movement
#define MOUSEKEY_WHEEL_INTERVAL	    75	       Time between wheel movements
#define MOUSEKEY_WHEEL_DELTA	    1	       Wheel movement step size
#define MOUSEKEY_WHEEL_MAX_SPEED	10	       Maximum number of scroll steps per scroll action
#define MOUSEKEY_WHEEL_TIME_TO_MAX	40	       Time until maximum scroll speed is reached


#define SOFT_SERIAL_PIN B10
#define SERIAL_USART_DRIVER SD3
#define SPLIT_LAYER_STATE_ENABLE

#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3200

#undef SPLIT_USB_DETECT

//#define SPLIT_USB_DETECT
//#define SPLIT_USB_TIMEOUT 1500

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