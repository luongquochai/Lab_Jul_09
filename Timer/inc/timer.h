#include <stdint.h>


#define     __I     volatile const   /*!< defines 'read only' permissions     */
#define     __O     volatile         /*!< defines 'write only' permissions    */
#define     __IO    volatile         /*!< defines 'read / write' permissions  */


typedef struct TIM1_struct
{
  __IO uint8_t CR1;   /*!< control register 1 */
  __IO uint8_t CR2;   /*!< control register 2 */
  __IO uint8_t SMCR;  /*!< Synchro mode control register */
  __IO uint8_t ETR;   /*!< external trigger register */
  __IO uint8_t DER;   /*!< DMA requests enable register */
  __IO uint8_t IER;   /*!< interrupt enable register*/
  __IO uint8_t SR1;   /*!< status register 1 */
  __IO uint8_t SR2;   /*!< status register 2 */
  __IO uint8_t EGR;   /*!< event generation register */
  __IO uint8_t CCMR1; /*!< CC mode register 1 */
  __IO uint8_t CCMR2; /*!< CC mode register 2 */
  __IO uint8_t CCMR3; /*!< CC mode register 3 */
  __IO uint8_t CCMR4; /*!< CC mode register 4 */
  __IO uint8_t CCER1; /*!< CC enable register 1 */
  __IO uint8_t CCER2; /*!< CC enable register 2 */
  __IO uint8_t CNTRH; /*!< counter high */
  __IO uint8_t CNTRL; /*!< counter low */
  __IO uint8_t PSCRH; /*!< prescaler high */
  __IO uint8_t PSCRL; /*!< prescaler low */
  __IO uint8_t ARRH;  /*!< auto-reload register high */
  __IO uint8_t ARRL;  /*!< auto-reload register low */
  __IO uint8_t RCR;   /*!< Repetition Counter register */
  __IO uint8_t CCR1H; /*!< capture/compare register 1 high */
  __IO uint8_t CCR1L; /*!< capture/compare register 1 low */
  __IO uint8_t CCR2H; /*!< capture/compare register 2 high */
  __IO uint8_t CCR2L; /*!< capture/compare register 2 low */
  __IO uint8_t CCR3H; /*!< capture/compare register 3 high */
  __IO uint8_t CCR3L; /*!< capture/compare register 3 low */
  __IO uint8_t CCR4H; /*!< capture/compare register 3 high */
  __IO uint8_t CCR4L; /*!< capture/compare register 3 low */
  __IO uint8_t BKR;   /*!< Break Register */
  __IO uint8_t DTR;   /*!< dead-time register */
  __IO uint8_t OISR;  /*!< Output idle register */
  __IO uint8_t DCR1;  /*!< DMA control register 1 */
  __IO uint8_t DCR2;  /*!< DMA control register 2 */
  __IO uint8_t DMAR;  /*!< DMA Address for brust mode */
}
TIM1_TypeDef;


#define TIM1_BASE                   (uint16_t)0x52B0
#define TIM1                        ((TIM1_TypeDef *) TIM1_BASE)

void Timer1_DeInit(void);
void CLK_Timer1_Config(void);
void Timer1_Reg_Config(void);
void Tim1_cmd(void);
void Timer1_TimeBaseInit((uint8_t) TIM1_Prescaler, ((uint8_t)0x00), (uint16_t) TIM1_Period, (uint8_t)TIM1_RepetitionCounter);


