#include "timer.h"
#include "clk.h"


void Timer1_DeInit(void)
{
  /* Reset tat ca thanh ghi Timer1 */
  TIM1->CR1     =       0x00;
  TIM1->CR2     =       0x00;
  TIM1->SMCR    =       0x00;
  TIM1->ETR     =       0x00;
  TIM1->IER     =       0x00;
  TIM1->SR2     =       0x00;
  /* DISABLE CHANNELS*/
  TIM1->CCER1   =       0x00;
  TIM1->CCER2   =       0x00;
}

void CLK_Timer1_Config(void)
{
  /*Enable the Timer1 Clock */
  CLK->PCKENR2 |= 0x02 
}

void Timer1_Reg_Config(void)
{
  /*TIM1_ARR register is buffered through a preload register (cho phep nap lai gia tri dem khi dem xong)
  DIR: Counter used as up-counter
  OPM: Counter is not stopped at update event
  CEN: Counter enable*/
  TIM1->CR1 |= 0x80; 
  
  TIM1->IER |= 0x01; //cho phep ngat khi tran
  
  /* Clear the flags (rc_w0) clear this bit by writing 0. Writing ?1? has no effect*/
  TIM1->SR1 = (uint8_t)(~(uint8_t)0x0001));
  TIM1->SR2 = (uint8_t)((uint8)(~((uint8_t)((uint16_t)0x0001 >> 8)))&(uint8_t)0x1E);

}
void Tim1_cmd(void)
{
  TIM1->CR1 |= 0x01; //cho phep timer hoat dong
}

