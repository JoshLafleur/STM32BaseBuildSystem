/**
 * @file System.c
 * @author Josh lafleur (josh.lafleur@outlook.com)
 * @brief Contain's projects main function. Is the main controller of the system
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/******************************************************************************
 *                             I N C L U D E S
 ******************************************************************************/

#include "SystemConfig.h"


/******************************************************************************
 *                       P U B L I C  F U N C T I O N S
 ******************************************************************************/

/**
 * @brief Main function of system. Handles initialization and running of entire
 *        system
 * @retval None
 */
int main(void)
{
  HAL_Init();

  return 0;
}

/**
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 */
void Error_Handler(void)
{
    __disable_irq();
    while (1)
    {
    }
}