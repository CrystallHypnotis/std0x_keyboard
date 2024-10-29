#pragma once

#include_next <mcuconf.h>

#include "config.h"

#undef STM32_SERIAL_USE_USART3
#define STM32_SERIAL_USE_USART3 TRUE
#define HAL_USE_SERIAL TRUE

#define HAL_USE_GPT TRUE
#undef BACKLIGHT_GPT_DRIVER
#define BACKLIGHT_GPT_DRIVER GPTD2
#undef STM32_GPT_USE_TIM2
#define STM32_GPT_USE_TIM2 TRUE










