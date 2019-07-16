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
#define PB0		1
#define PB1		2
#define PB2		3
#define PB5		4
#define PB6		5
#define PB7		6
#define PB8		7
#define PB9		8
#define PB10	9
#define PB11	10
#define PB12	11
#define PB13	12
#define PB14	13
#define PB15	14
#define PC4		15
#define PC5		16
#define PC6		17
#define PC7		18
#define PC8		19
#define PC9		20
#define PC10	21
#define PC11	22
#define PC12	23
#define PC13	24
#define PD2		25
#define PA0		26
#define PA1		27
#define PA2		28
#define PC0		29 // A0
#define PC1		30 // A1
#define PC2		31 // A2
#define PC3		32 // A3

// This must be a literal
#define NUM_DIGITAL_PINS        32
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       4
#define NUM_ANALOG_FIRST        28

// On-board LED pin number
#define LED_ORANGE              PA0
#define LED_RED               	PA1
#define LED_GREEN               PA2

#define LED_BUILTIN             LED_RED

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


#define PIN_SPI_MISO			(PB14)
#define PIN_SPI_MOSI			(PB15)
#define PIN_SPI_SCK				(PB13)

#define UART1_DBG_TX			(PB6)
#define UART1_DBG_RX			(PB7)

#define PIN_WIRE_SDA			(PB9)
#define PIN_WIRE_SCL			(PB8)



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
