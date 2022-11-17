#include "GPIO.h"


void  GPIO_Clock_Enable(uint32_t *GPIOx) 
{
  assert(GPIOx == GPIOA || GPIOB || GPIOC || GPIOD);
  uint16_t *RCCAHB1 = (uint16_t *) (0x40023830);
  
 
    
  if (GPIOx == GPIOA)
  {
    *RCCAHB1 |= (1<<0);
    
  }  
   
  else if (GPIOx == GPIOB)
  {
    *RCCAHB1 |= (1<<1);
    
  }  
   
  
  else if (GPIOx == GPIOC)
  {
    *RCCAHB1 |= (1<<2);  
  }  
   
  
  else if (GPIOx == GPIOD)
  {
    *RCCAHB1 |= (1<<3);
    
  }
}


 
void GPIO_Config(uint32_t *GPIOx, uint8_t pin, uint8_t Mode, uint8_t Type){

    
     uint32_t *GPIO_MODER = (uint32_t *) (GPIOx); 
    *GPIO_MODER &=~ (0x3 << pin*2)  ; // initialisation du registre MODER en 0
     *GPIO_MODER |= (Mode << pin*2 ) ;
     uint32_t *GPIO_OTYPER = (uint32_t *) (GPIOx + 0x04);
     if (Type ==0) { // PUSH PULL
       *GPIO_OTYPER &=~(1<< pin); }
     else if (Type ==1) { // OPEN DRAIN
       *GPIO_OTYPER |=(1<< pin); }
     }

 