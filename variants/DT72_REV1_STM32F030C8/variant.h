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
#define PA8     3
#define PA9     4
#define PA10    5
#define PA11    6
#define PA12    7
#define PA15    8
#define PB0     9
#define PB1     10
#define PB2     11
#define PB3     12
#define PF7     13
#define PF6     14
#define PA2     15
#define PA3     16
#define PB4     17
#define PB5     18
#define PB8     19
#define PB9     20
#define PB10    21
#define PB11    22
#define PB12    23
#define PB13    24
#define PB14    25
#define PB15    26
#define PC13    27
#define PC14    28
#define PC15    29
#define PA0     30
#define PA4     31
#define PA5     32
#define PA6     33
#define PA7     34

// This must be a literal
#define NUM_DIGITAL_PINS        35
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       5
#define NUM_ANALOG_FIRST        30

// On-board LED pin number
#define LED_BUILTIN             PA15
#define LED_RED                 LED_BUILTIN

// On-board user button
#define USER_BTN                PB4
#define USER_BTN1               PB4
#define USER_BTN2               PB5

// Timer Definitions
// Do not use timer used by PWM pins when possible. See PinMap_PWM.
#define TIMER_TONE              TIM6

// Do not use basic timer: OC is required
#define TIMER_SERVO             TIM3  //TODO: advanced-control timers don't work

// UART Definitions
#define SERIAL_UART_INSTANCE    2 //Connected to ST-Link
// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           0
#define PIN_SERIAL_TX           1

// PINS from DT-7.2_Rev1_Schematics.pdf
#define AI_2V048_REF      (PA0)
#define AI_DIM_CTRL       (PA4)
#define AI_COLOR_CTRL     (PA5)
#define AI_PTC            (PA6)

#define PWM_WORM_TIM1_CH1 (PA8)
#define PWM_COLD_TIM1_CH2 (PA9)

#define DISP_C1           (PB8)
#define DISP_C2           (PB9)
#define DISP_C3           (PB10)
#define DISP_C4           (PB11)
#define DISP_C5           (PB12)
#define DISP_C6           (PB13)
#define DISP_C7           (PB14)
#define DISP_C8           (PB15)

#define DISP_R1           (PC13)
#define DISP_R2           (PC14)
#define DISP_R3           (PC15)

#define UART2_RS485_DE    (PA1)

#define TP1               (PA10)
#define TP2               (PA11)
#define TP3               (PA12)
#define TP4               (PB0)
#define TP5               (PB1)
#define TP6               (PB2)

#define LED_RED_HEAT      (PB3)

#define DEBUG_LED         (PA15)

#define BUTTON1           (PB4)
#define BUTTON2           (PB5)


//#define PWM_FREQUENCY     	14*1000 // 16kHz
#define PWM_FREQUENCY     	7*1000 // 16kHz
#define PWM_RESOLUTION		10
#define PWM_MAX_DUTY_CYCLE          1023


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
#define SERIAL_PORT_HARDWARE_OPEN   Serial1
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
