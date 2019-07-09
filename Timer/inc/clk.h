#include <stdint.h>

#define     __I     volatile const   /*!< defines 'read only' permissions     */
#define     __O     volatile         /*!< defines 'write only' permissions    */
#define     __IO    volatile         /*!< defines 'read / write' permissions  */
#define Sbit(var,place) ((var) |= ((1<<place)))
#define Cbit(var,place) ((var) &=~ ((1<<place)))
#define Gbit(var,place) (((var)>>place) &(0x01) )

typedef struct CLK_struct
{
  __IO uint8_t CKDIVR;      /*!< Clock Master Divider Register */
  __IO uint8_t CRTCR;  /*!< RTC Clock selection Register */
  __IO uint8_t ICKCR;     /*!< Internal Clocks Control Register */
  __IO uint8_t PCKENR1;  /*!< Peripheral Clock Gating Register 1 */
  __IO uint8_t PCKENR2;  /*!< Peripheral Clock Gating Register 2 */
  __IO uint8_t CCOR;       /*!< Configurable Clock Output Register */
  __IO uint8_t ECKCR;     /*!< External Clocks Control Register */
  __IO uint8_t SCSR;     /*!< System clock status Register */
  __IO uint8_t SWR;      /*!< System clock Switch Register */
  __IO uint8_t SWCR;     /*!< Switch Control Register */
  __IO uint8_t CSSR;     /*!< Clock Security Sytem Register */
  __IO uint8_t CBEEPR;     /*!< Clock BEEP Register */
  __IO uint8_t HSICALR;     /*!< HSI Calibration Register */
  __IO uint8_t HSITRIMR; /*!< HSI clock Calibration Trimmer Register */
  __IO uint8_t HSIUNLCKR; /*!< HSI Unlock  Register */
  __IO uint8_t REGCSR;  /*!< Main regulator control status register */
  __IO uint8_t PCKENR3;  /*!< Peripheral Clock Gating Register 3 */
}
CLK_TypeDef;

#define CLK_BASE                    (uint16_t)0x50C0
#define CLK                         ((CLK_TypeDef *) CLK_BASE)


void CLK_LSEconfig(void);