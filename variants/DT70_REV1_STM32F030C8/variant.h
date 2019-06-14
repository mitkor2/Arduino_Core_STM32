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
#define LED_BUILTIN             DEBUG_LED
#define LED_RED                 DEBUG_LED

// On-board user button
// TODO define new button pins
#define USER_BTN                BUTTON1
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

// PINS from DT-7.0_Rev1_Schematics.pdf
#define AI_2V048_REF      		(PA0)
#define AI_DIM_CTRL       		(PA4)
#define AI_COLOR_CTRL     		(PA5)
#define AI_PTC            		(PA6)

#define PWM_WORM_TIM1_CH1 		(PA8)
#define PWM_COLD_TIM1_CH2 		(PA9)

#define DISP_C1           		(PB8)
#define DISP_C2           		(PB9)
#define DISP_C3           		(PB10)
#define DISP_C4           		(PB11)
#define DISP_C5           		(PB12)
#define DISP_C6           		(PB13)
#define DISP_C7           		(PB14)
#define DISP_C8           		(PB15)

#define DISP_R1           		(PC13)
#define DISP_R2           		(PC14)
#define DISP_R3           		(PC15)

#define UART2_RS485_DE    		(PA1)
#define UART2_RS485_TX    		(PA2)
#define UART2_RS485_RX    		(PA3)

#define ENABLE        			(PA10)
#define DEBUG_LED         		(PA11)
#define LED_RED_HEAT      		(PA12)

#define SPI_NSS         		(PA15)

#define WLED_WORM_CURRENT		(PB0)
#define WLED_COLD_CURRENT   	(PB1)

#define BUTTON1	  				(PB2)
#define BUTTON2					(PB5)

#define PIN_SPI_MISO			(PB4)
#define PIN_SPI_MOSI			(PA7)
#define PIN_SPI_SCK				(PB3)

#define UART1_DBG_TX			(PB6)
#define UART1_DBG_RX			(PB7)


#define PWM_FREQUENCY     			(14 * 1000)
#define PWM_RESOLUTION				(10)
#define PWM_MAX_DUTY_CYCLE          ((1 << PWM_RESOLUTION) - 1)


#define PIN_WIRE_SDA			(PF7)
#define PIN_WIRE_SCL			(PF6)

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
