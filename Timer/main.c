#include "clk.h"
#include "gpio.h"
#include "itc.h"
#include "exti.h"
#include "timer.h"
#include "lcd.h"

#include <intrinsics.h>
#define SET_B(REG,N) (REG |= (1<<N)) /*!< Set bit N of register */
#define CLR_B(REG,N) (REG &= ~(1<<N)) /*!< Clear bit N of register */
#define GET_B(REG,N) ((0u == (REG & (1<<N)))?0u:1u) /*!< Get bit N of register */

void main(void)
{
  Init_LCD();
  CLK->CKDIVR = 0x00; //set the frequency to 16 MHz
  CLK->PCKENR2 |= 0x02; /* enable timer1 clock*/
  TIM1->CR1 |= 0x01 | 0x80 ; //enable  counter, count up
  /*Prescaler =16000  */
  TIM1->PSCRH = 0x3E;
  TIM1->PSCRL = 0x80;
  /* ARR, auto reload register */
  TIM1->ARRH = 0x00;
  TIM1->ARRL = 0x00;
  //Enable timer interrupt
  TIM1->IER = 0x01;
  asm("rim\n");
  
}
#pragma vector = 18
__interrupt void LCD_interrupt_handler(void)
{
  
  
  SET_B(LCD_CR3,3); //Clear SOF flag
}
#pragma vector = 25
__interrupt void TIM1_interrupt_handler(void)
{
  
  
  TIM1->SR1 = ~0x01; //clear interrupt
}





