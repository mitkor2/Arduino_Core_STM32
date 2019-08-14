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

#define PB7     0
#define PB6     1
#define PA1     2
#define PA7     3
#define PA8     4
#define PA9     5
#define PA10    6
#define PA11    7
#define PA12    8
#define PA15    9
#define PB2     10
#define PB3     11
#define PF7     12
#define PF6     13
#define PA2     14
#define PA3     15
#define PB4     16
#define PB5     17
#define PB8     18
#define PB9     19
#define PB10    20
#define PB11    21
#define PB12    22
#define PB13    23
#define PB14    24
#define PB15    25
#define PC13    26
#define PC14    27
#define PC15    28
#define PA0     29
#define PA4     30
#define PA5     31
#define PA6     32
#define PB0     33
#define PB1     34


// This must be a literal
#define NUM_DIGITAL_PINS        35
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       6
#define NUM_ANALOG_FIRST        29

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

// PINS from DT-7.3_Rev1_Schematics.pdf
#define AI_2V048_REF      		(PA0)
#define AI_DIM_CTRL       		(PA4)
#define AI_NTC     				(PA5)

#define PWM_WORM_TIM1_CH1 		(PA8)
#define PWM_WORM_TIM1_CH2 		(PA9)
#define FAN_PWM			 		(PA9)

#define SPI2_NSS           		(PB12)
#define PIN_SPI2_SCK       		(PB13)
#define PIN_SPI2_MISO      		(PB14)
#define PIN_SPI2_MOSI      		(PB15)


#define OLED_RESET         		(PC14)
#define OLED_C_D           		(PC15)

#define UART2_RS485_DE    		(PA1)
#define UART2_RS485_TX    		(PA2)
#define UART2_RS485_RX    		(PA3)

#define ENABLE        			(PA10)
#define DEBUG_LED         		(PA11)
#define DMX_CABLE_ON      		(PA12)

#define SPI_NSS         		(PA15)
#define SPI2_NSS         		(PB12)

#define BUTTON1	  				(PB1)
#define BUTTON2					(PB2)

#define PIN_SPI_MISO			(PB4)
#define PIN_SPI_MOSI			(PB5)
#define PIN_SPI_SCK				(PB3)


#define PIN_SPI2_MOSI			(PB15)
#define PIN_SPI2_SCK			(PB13)

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
