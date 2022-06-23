/**
 * @file SystemConfig.h
 * @author Josh lafleur (josh.lafleur@outlook.com)
 * @brief Define Bbase system configuration
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

/******************************************************************************
 *                             I N C L U D E S
 ******************************************************************************/

#if defined(F1)
  #define STM32F103xB
  #include "stm32f1xx.h"
  #include "stm32f1xx_hal_conf.h"
#elif defined(F4)
  #define STM32F429xx
  #include "stm32f4xx.h"
  #include "stm32f4xx_hal_conf.h"
#endif

#include "ErrorHandler.h"


/******************************************************************************
 *                              D E F I N E S
 ******************************************************************************/
