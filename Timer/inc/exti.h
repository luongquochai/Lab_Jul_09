#include <stdint.h>

#define     __I     volatile const   /*!< defines 'read only' permissions     */
#define     __O     volatile         /*!< defines 'write only' permissions    */
#define     __IO    volatile         /*!< defines 'read / write' permissions  */



typedef struct EXTI_struct
{
  __IO uint8_t CR1;           /*!<  The four LSB EXTI  pin sensitivity */
  __IO uint8_t CR2;           /*!<  The four MSB EXTI  pin sensitivity */
  __IO uint8_t CR3;           /*!<  EXTI port B & port D sensitivity */
  __IO uint8_t SR1;           /*!<  Pins Status flag register 1 */
  __IO uint8_t SR2;           /*!<  Ports Status flage register 2 */
  __IO uint8_t CONF1;         /*!<  Port interrupt selector */
  uint8_t RESERVED[4];  /*!<  reserved area */
  __IO uint8_t CR4;           /*!<  EXTI port G & port H sensitivity */
  __IO uint8_t CONF2;         /*!<  Port interrupt selector */
}
EXTI_TypeDef;

#define EXTI_BASE                   (uint16_t)0x50A0
#define EXTI                        ((EXTI_TypeDef *) EXTI_BASE)

