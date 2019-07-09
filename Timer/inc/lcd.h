#include <stdint.h>

#define     __I     volatile const   /*!< defines 'read only' permissions     */
#define     __O     volatile         /*!< defines 'write only' permissions    */
#define     __IO    volatile         /*!< defines 'read / write' permissions  */
typedef struct LCD_struct
{
  __IO uint8_t CR1;      /*!< LCD control register 1 */
  __IO uint8_t CR2;      /*!< LCD control register 2 */
  __IO uint8_t CR3;      /*!< LCD control register 3 */
  __IO uint8_t FRQ;      /*!< LCD frequency register */
  __IO uint8_t PM[6];    /*!< LCD portmask registers*/
  uint8_t RESERVED1[2];  /*!< Reserved */
  __IO uint8_t RAM[22];  /*!< LCD RAM registers*/
  uint8_t RESERVED2[13]; /*!< Reserved */
  __IO uint8_t CR4;      /*!< LCD control register 4 */
}LCD_TypeDef;

#define LCD_BASE                    (uint16_t)0x5400
#define LCD                         ((LCD_TypeDef *) LCD_BASE)


void Init_LCD();
void config_LCD_interrupt();
void LCD_Print_Digit1(uint8_t value);
void LCD_Print_Digit2(uint8_t value);
void config_LCD_pins();
void config_f_LCD();
void config_RTC_clock();
void enable_clock_LCD();
void LCD_Clear_Digits();
void Start_Write_Ram(void);

