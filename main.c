/**
  ******************************************************************************
  * @file    main.c
  * @author  Ons Bouzidi
  * @brief   GPIO
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "GPIO.h"




int main()
{

 GPIO_Clock_Enable(GPIOD);
 
 GPIO_Config (GPIOD,PIN12,OUTPUT,OUTPUT_PUSH_PULL);
 GPIO_Config (GPIOB,PIN10,INPUT,OUTPUT_OPEN_DRAIN); //exemple2 pour tester la fonction

  while(1)
  {
  }
}

 

/**************************************END OF FILE**************************************/
