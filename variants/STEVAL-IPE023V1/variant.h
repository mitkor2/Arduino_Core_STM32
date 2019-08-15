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

#define PA3		0
#define PA4		1
#define PA5		2
#define PA6		3
#define PA7		4
#define PB0		5
#define PB1		6
#define PB2		7
#define PB5		8
#define PB6		9
#define PB7		10
#define PB8		11
#define PB9		12
#define PB10	13
#define PB11	14
#define PB12	15
#define PB13	16
#define PB14	17
#define PB15	18
#define PC4		19
#define PC5		20
#define PC6		21
#define PC7		22
#define PC8		23
#define PC9		24
#define PC10	25
#define PC11	26
#define PC12	27
#define PC13	28
#define PD2		29
#define PA0		30
#define PA1		31
#define PA2		32
#define PC0		33 // A0
#define PC1		34 // A1
#define PC2		35 // A2
#define PC3		36 // A3

// This must be a literal
#define NUM_DIGITAL_PINS        36
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       4
#define NUM_ANALOG_FIRST        32

// On-board LED pin number
#define LED_ORANGE              PA0
#define LED_RED               	PA1
#define LED_GREEN               PA2

#define LED_BUILTIN             LED_RED

#define LED_ON					(1)
#define LED_OFF					(0)

// On-board user button
//#define USER_BTN                PB0

// Timer Definitions
// Do not use timer used by PWM pins when possible. See PinMap_PWM.
#define TIMER_TONE              TIM4

// Do not use basic timer: OC is required
#define TIMER_SERVO             TIM2  //TODO: advanced-control timers don't work

// UART Definitions
#define SERIAL_UART_INSTANCE    1 //Connected to ST-Link
// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata

#define PIN_SERIAL_RX           (PB7)
#define PIN_SERIAL_TX           (PB6)


#define PIN_SPI_MISO			(PA6)
#define PIN_SPI_MOSI			(PA7)
#define PIN_SPI_SCK				(PA5)

#define UART1_DBG_TX			(PB6)
#define UART1_DBG_RX			(PB7)

#define PIN_WIRE_SDA			(PB9)
#define PIN_WIRE_SCL			(PB8)

#define ENABLE_HWSERIAL3
#define ENABLE_HWSERIAL4
#define ENABLE_HWSERIAL5

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
#define SERIAL_PORT_MONITOR     Serial
#define SERIAL_PORT_HARDWARE    Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
