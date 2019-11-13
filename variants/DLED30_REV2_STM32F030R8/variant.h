/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

//Variant for DT_73_Rev1

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_




/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/
#include "PeripheralPins.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
extern const PinName digitalPin[];

#define PB7     0	//UART1_RX
#define PB6     1	//UART1_TX
#define PA1     2	//UART2_RS485_DE
#define PA7     3	//LR_IRQ
#define PA8     4	//PWM_LED
#define PA9     5	//FAN_CTRL_PWM
#define PA10    6	//ENABLE#
#define PA11    7	//DEBUG_LED
#define PA12    8	//DMX_CABLE_EN
#define PA15    9	//LEDDRV_SPI_NSS (Actually not used)
#define PB2     29	//BUTTON2
#define PB3     11	//LEDDRV_SPI_SCK (Actually not used)
#define PF7     12	//LED_GREEN
#define PF6     13	//LED_RED
#define PA2     14	//UART2_RS485_TX
#define PA3     15	//UART2_RS485_RX
#define PB4     16	//LEDDRV_SPI_MISO (Actually not used)
#define PB5     17	//LEDDRV_SPI_MOSI (Actually not used)
#define PB8     18	//I2C_SCL
#define PB9     19	//I2C_SDA
#define PB10    20	//UART3_TX
#define PB11    21	//UART3_RX
#define PB12    22	//SPI2_OLED_CS
#define PB13    23	//SPI2_SCK
#define PB14    24	//SPI2_MISO
#define PB15    25	//SPI2_MOSI
#define PC13    26	//LR_CS
#define PC14    27	//OLED_RESET
#define PC15    28	//OLED_D/C
#define PB1     10	//BUTTON1
#define PA0     30  //AI_2V048_REF
#define PA4     31	//AI_DIM_CTRL
#define PA5     32	//AI_NTC
#define PA6     33	//LR_RE/DE
#define PB0     34	//UART2_RS485_RX
#define PC10    35	//FAULT
#define PC0     36	//IVINMON
#define PC1     37	//ISMON
#define PC2     38	//BOARD TEMPERATURE



// This must be a literal
#define NUM_DIGITAL_PINS        39
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       9
#define NUM_ANALOG_FIRST        30

// On-board LED pin number
//#define LED_BUILTIN             DEBUG_LED
//#define LED_RED                 DEBUG_LED

// On-board user button
// TODO define new button pins

//#define DOUBLE_CHANEL			(1)

#define USER_BTN1               BUTTON1
#define USER_BTN2               BUTTON2

// Timer Definitions
// Do not use timer used by PWM pins when possible. See PinMap_PWM.
#define TIMER_TONE              TIM6

// Do not use basic timer: OC is required
#define TIMER_SERVO             TIM3  //TODO: advanced-control timers don't work

// UART Definitions
#define SERIAL_UART_INSTANCE    1 //Connected to ST-Link

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           UART1_DBG_RX
#define PIN_SERIAL_TX			UART1_DBG_TX

// PINS from 03_DLED30D_MBLT_Rev1.scm
#define AI_2V048_REF      		(PA0)
#define AI_DIM_CTRL       		(PA4)
#define AI_NTC     				(PA5)

#define PWM_WORM_TIM1_CH1 		(PA8)
#define FAN_PWM			 		(PA9)

#define SPI2_NSS           		(PB12)
#define PIN_SPI2_SCK       		(PB13)
#define PIN_SPI2_MISO      		(PB14)
#define PIN_SPI2_MOSI      		(PB15)

#define FAULT_PIN         		(PC10)
#define IVINMON_PIN				(PC0)
#define ISMON_PIN				(PC1)
#define BOARD_TEMP_PIN			(PC2)

#define OLED_RESET         		(PC14)
#define OLED_C_D           		(PC15)

#define UART2_RS485_DE    		(PA1)
#define UART2_RS485_TX    		(PA2)
#define UART2_RS485_RX    		(PA3)

#define ENABLE        			(PA10)
#define DEBUG_LED         		(PA11)
#define DMX_CABLE_ON      		(PA12)

#define SPI_NSS         		(PA15)


#define BUTTON1	  				(PB1)
#define BUTTON2					(PB2)

#define PIN_SPI_MISO			(PB4)
#define PIN_SPI_MOSI			(PB5)
#define PIN_SPI_SCK				(PB3)


#define UART1_DBG_TX			(PB6)
#define UART1_DBG_RX			(PB7)

#define LED_RED_HEAT      		(PF6)
#define LED_GREEN      			(PF7)


#define PWM_FREQUENCY     			(14 * 1000)
#define PWM_RESOLUTION				(10)
#define PWM_MAX_DUTY_CYCLE          ((1 << PWM_RESOLUTION) - 1)

#define PIN_WIRE_SCL			(PB8)
#define PIN_WIRE_SDA			(PB9)



/*----------------------------------------------------------------------------
 *        Extra HALL Modules
 *----------------------------------------------------------------------------*/


 
#define HAL_MODULE_ENABLED  
#define HAL_ADC_MODULE_ENABLED
/*#define HAL_CRYP_MODULE_ENABLED   */
/*#define HAL_CAN_MODULE_ENABLED   */
/*#define HAL_CEC_MODULE_ENABLED   */
/*#define HAL_COMP_MODULE_ENABLED   */
/*#define HAL_CRC_MODULE_ENABLED   */
/*#define HAL_CRYP_MODULE_ENABLED   */
/*#define HAL_TSC_MODULE_ENABLED   */
/*#define HAL_DAC_MODULE_ENABLED   */
/*#define HAL_I2S_MODULE_ENABLED   */
/*#define HAL_IWDG_MODULE_ENABLED   */
/*#define HAL_LCD_MODULE_ENABLED   */
/*#define HAL_LPTIM_MODULE_ENABLED   */
/*#define HAL_RNG_MODULE_ENABLED   */
/*#define HAL_RTC_MODULE_ENABLED   */
#define HAL_SPI_MODULE_ENABLED
#define HAL_TIM_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
/*#define HAL_USART_MODULE_ENABLED   */
/*#define HAL_IRDA_MODULE_ENABLED   */
/*#define HAL_SMARTCARD_MODULE_ENABLED   */
/*#define HAL_SMBUS_MODULE_ENABLED   */
/*#define HAL_WWDG_MODULE_ENABLED   */
/*#define HAL_PCD_MODULE_ENABLED   */
/*#define HAL_EXTI_MODULE_ENABLED   */
#define HAL_CORTEX_MODULE_ENABLED
#define HAL_DMA_MODULE_ENABLED
#define HAL_FLASH_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED





#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR         Serial
#define SERIAL_PORT_HARDWARE        Serial
//#define SERIAL_PORT_HARDWARE_OPEN   Serial2
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
