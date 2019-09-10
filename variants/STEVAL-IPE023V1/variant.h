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
#define PA8		5
#define PA9		6
#define PB0		7
#define PB1		8
#define PB2		9
#define PB5		10
#define PB6		11
#define PB7		12
#define PB8		13
#define PB9		14
#define PB10	15
#define PB11	16
#define PB12	17
#define PB13	18
#define PB14	19
#define PB15	20
#define PC4		21
#define PC5		22
#define PC6		23
#define PC7		24
#define PC8		25
#define PC9		26
#define PC10	27
#define PC11	28
#define PC12	29
#define PC13	30
#define PD2		31
#define PA0		32
#define PA1		33
#define PA2		34
#define PC0		35 // A0
#define PC1		35 // A1
#define PC2		37 // A2
#define PC3		38 // A3

// This must be a literal
#define NUM_DIGITAL_PINS        35
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       4
#define NUM_ANALOG_FIRST        35

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
#define SERIAL_UART_INSTANCE    3 //Connected to ST-Link
// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata

#define PIN_SERIAL3_RX			(PB11)
#define PIN_SERIAL3_TX			(PB10)

#define PIN_SERIAL4_RX			(PC11)
#define PIN_SERIAL4_TX			(PC10)

#define PIN_SERIAL_RX           (PIN_SERIAL3_RX)
#define PIN_SERIAL_TX           (PIN_SERIAL3_TX)

#define PIN_SPI_MISO			(PA6)
#define PIN_SPI_MOSI			(PA7)
#define PIN_SPI_SCK				(PA5)
#define PIN_SPI_CS				(PA4)

#define PIN_WIRE_SDA			(PB9)
#define PIN_WIRE_SCL			(PB8)

#define ENABLE_HWSERIAL3
#define ENABLE_HWSERIAL4
//#define ENABLE_HWSERIAL5

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
//#define SERIAL_PORT_MONITOR     Serial
//#define SERIAL_PORT_HARDWARE    Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
