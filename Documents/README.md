# STMicroelectronics STM32H735G-DK

## Overview

The STM32H735G-DK Discovery kit is a complete demonstration and development platform for Arm Cortex-M7 core-based STM32H735IGK6U microcontroller, with 1 Mbyte of Flash memory and 564 Kbytes of SRAM. The STM32H735G-DK Discovery kit is used as a reference design for user application development before porting to the final product, thus simplifying the application development.

The full range of hardware features available on the board helps users to enhance their application development by an evaluation of all the peripherals (such as USB OTG FS, Ethernet, microSD™ card, USART, CAN FD, SAI audio DAC stereo with audio jack input and output, MEMS digital microphone, HyperRAM™, Octo-SPI Flash memory, RGB interface LCD with capacitive touch panel, and others). ARDUINO® Uno V3, Pmod™ and STMod+ connectors provide easy connection to extension shields or daughterboards for specific applications.

STLINK-V3E is integrated into the board, as the embedded in-circuit debugger and programmer for the STM32 MCU and USB Virtual COM port bridge.
The STM32H735G-DK board comes with the STM32CubeH7 MCU Package, which provides an STM32 comprehensive software HAL library as well as various software examples.

## Schematics

- [STM32H735G-DK board schematic](https://www.st.com/resource/en/schematic_pack/mb1520-h735i-b02_schematic.pdf)

## CMSIS-Drivers

This board support pack contains a CMSIS-Driver for the [VIO](https://arm-software.github.io/CMSIS_5/develop/Driver/html/group__vio__interface__gr.html) interface. This is a virtual I/O abstraction for peripherals that are typically used in example projects. The **Blinky** example uses this interface to create a blinking light with the USER LED mounted on the board that can be controlled by the **Button USER**.

Virtual Resource  | Variable       | Physical Resource on STM32H735G-DK             |
:-----------------|:---------------|:-----------------------------------------------|
vioBUTTON0        | vioSignalIn.0  | GPIO C.13: Button USER                         |
vioLED0           | vioSignalOut.0 | GPIO C.2:  LD2 RED                             |
vioLED1           | vioSignalOut.1 | GPIO C.3:  LD1 GREEN                           |

Refer to the [schematics](#schematics) for board connection information.
