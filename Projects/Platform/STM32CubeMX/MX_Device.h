/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 25/03/2022 11:29:23
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            64000000
#define MX_HSE_VALUE                            25000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_PLLDSIFreq_Value                     500000000
#define MX_SYSCLKFreq_VALUE                     550000000
#define MX_HCLKFreq_Value                       275000000
#define MX_CortexFreq_Value                     550000000
#define MX_APB1Freq_Value                       137500000
#define MX_APB2Freq_Value                       137500000
#define MX_CECFreq_Value                        32000
#define MX_RTCFreq_Value                        32000
#define MX_USBFreq_Value                        275000000
#define MX_WatchDogFreq_Value                   32000
#define MX_DSIFreq_Value                        96000000
#define MX_DSIPHYCLKFreq_Value                  96000000
#define MX_DSITXEscFreq_Value                   20000000
#define MX_SPDIFRXFreq_Value                    275000000
#define MX_MCO1PinFreq_Value                    64000000
#define MX_MCO2PinFreq_Value                    550000000

/*-------------------------------- CORTEX_M7  --------------------------------*/

#define MX_CORTEX_M7                            1

/* GPIO Configuration */

/*-------------------------------- DMA        --------------------------------*/

#define MX_DMA                                  1

/* NVIC Configuration */

/* NVIC DMA1_Stream1_IRQn */
#define MX_DMA1_Stream1_IRQn_interruptPremptionPriority 8
#define MX_DMA1_Stream1_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream1_IRQn_Subriority         0

/* NVIC DMA1_Stream0_IRQn */
#define MX_DMA1_Stream0_IRQn_interruptPremptionPriority 8
#define MX_DMA1_Stream0_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream0_IRQn_Subriority         0

/*-------------------------------- ETH        --------------------------------*/

#define MX_ETH                                  1

/* GPIO Configuration */

/* Pin PA7 */
#define MX_ETH_CRS_DV_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_CRS_DV_Pin                       PA7
#define MX_ETH_CRS_DV_GPIOx                     GPIOA
#define MX_ETH_CRS_DV_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_CRS_DV_GPIO_Pin                  GPIO_PIN_7
#define MX_ETH_CRS_DV_GPIO_AF                   GPIO_AF11_ETH
#define MX_ETH_CRS_DV_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PA1 */
#define MX_ETH_REF_CLK_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_REF_CLK_Pin                      PA1
#define MX_ETH_REF_CLK_GPIOx                    GPIOA
#define MX_ETH_REF_CLK_GPIO_PuPd                GPIO_NOPULL
#define MX_ETH_REF_CLK_GPIO_Pin                 GPIO_PIN_1
#define MX_ETH_REF_CLK_GPIO_AF                  GPIO_AF11_ETH
#define MX_ETH_REF_CLK_GPIO_Mode                GPIO_MODE_AF_PP

/* Pin PC4 */
#define MX_ETH_RXD0_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_RXD0_Pin                         PC4
#define MX_ETH_RXD0_GPIOx                       GPIOC
#define MX_ETH_RXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD0_GPIO_Pin                    GPIO_PIN_4
#define MX_ETH_RXD0_GPIO_AF                     GPIO_AF11_ETH
#define MX_ETH_RXD0_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PC5 */
#define MX_ETH_RXD1_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_RXD1_Pin                         PC5
#define MX_ETH_RXD1_GPIOx                       GPIOC
#define MX_ETH_RXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD1_GPIO_Pin                    GPIO_PIN_5
#define MX_ETH_RXD1_GPIO_AF                     GPIO_AF11_ETH
#define MX_ETH_RXD1_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PB11 */
#define MX_ETH_TX_EN_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TX_EN_Pin                        PB11
#define MX_ETH_TX_EN_GPIOx                      GPIOB
#define MX_ETH_TX_EN_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_TX_EN_GPIO_Pin                   GPIO_PIN_11
#define MX_ETH_TX_EN_GPIO_AF                    GPIO_AF11_ETH
#define MX_ETH_TX_EN_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA2 */
#define MX_ETH_MDIO_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_MDIO_Pin                         PA2
#define MX_ETH_MDIO_GPIOx                       GPIOA
#define MX_ETH_MDIO_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_MDIO_GPIO_Pin                    GPIO_PIN_2
#define MX_ETH_MDIO_GPIO_AF                     GPIO_AF11_ETH
#define MX_ETH_MDIO_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PB13 */
#define MX_ETH_TXD1_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TXD1_Pin                         PB13
#define MX_ETH_TXD1_GPIOx                       GPIOB
#define MX_ETH_TXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD1_GPIO_Pin                    GPIO_PIN_13
#define MX_ETH_TXD1_GPIO_AF                     GPIO_AF11_ETH
#define MX_ETH_TXD1_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PB12 */
#define MX_ETH_TXD0_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TXD0_Pin                         PB12
#define MX_ETH_TXD0_GPIOx                       GPIOB
#define MX_ETH_TXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD0_GPIO_Pin                    GPIO_PIN_12
#define MX_ETH_TXD0_GPIO_AF                     GPIO_AF11_ETH
#define MX_ETH_TXD0_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PC1 */
#define MX_ETH_MDC_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_MDC_Pin                          PC1
#define MX_ETH_MDC_GPIOx                        GPIOC
#define MX_ETH_MDC_GPIO_PuPd                    GPIO_NOPULL
#define MX_ETH_MDC_GPIO_Pin                     GPIO_PIN_1
#define MX_ETH_MDC_GPIO_AF                      GPIO_AF11_ETH
#define MX_ETH_MDC_GPIO_Mode                    GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC ETH_IRQn */
#define MX_ETH_IRQn_interruptPremptionPriority  8
#define MX_ETH_IRQn_PriorityGroup               NVIC_PRIORITYGROUP_4
#define MX_ETH_IRQn_Subriority                  0

/*-------------------------------- SDMMC1     --------------------------------*/

#define MX_SDMMC1                               1

/* GPIO Configuration */

/* Pin PD2 */
#define MX_SDMMC1_CMD_Pin                       PD2
#define MX_SDMMC1_CMD_GPIOx                     GPIOD
#define MX_SDMMC1_CMD_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CMD_GPIO_Pin                  GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIO_AF                   GPIO_AF12_SDMMC1
#define MX_SDMMC1_CMD_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PC8 */
#define MX_SDMMC1_D0_Pin                        PC8
#define MX_SDMMC1_D0_GPIOx                      GPIOC
#define MX_SDMMC1_D0_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0_GPIO_Pin                   GPIO_PIN_8
#define MX_SDMMC1_D0_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_D0_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC9 */
#define MX_SDMMC1_D1_Pin                        PC9
#define MX_SDMMC1_D1_GPIOx                      GPIOC
#define MX_SDMMC1_D1_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D1_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D1_GPIO_Pin                   GPIO_PIN_9
#define MX_SDMMC1_D1_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_D1_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC10 */
#define MX_SDMMC1_D2_Pin                        PC10
#define MX_SDMMC1_D2_GPIOx                      GPIOC
#define MX_SDMMC1_D2_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D2_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D2_GPIO_Pin                   GPIO_PIN_10
#define MX_SDMMC1_D2_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_D2_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC11 */
#define MX_SDMMC1_D3_Pin                        PC11
#define MX_SDMMC1_D3_GPIOx                      GPIOC
#define MX_SDMMC1_D3_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D3_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D3_GPIO_Pin                   GPIO_PIN_11
#define MX_SDMMC1_D3_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_D3_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC12 */
#define MX_SDMMC1_CK_Pin                        PC12
#define MX_SDMMC1_CK_GPIOx                      GPIOC
#define MX_SDMMC1_CK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_CK_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CK_GPIO_Pin                   GPIO_PIN_12
#define MX_SDMMC1_CK_GPIO_AF                    GPIO_AF12_SDMMC1
#define MX_SDMMC1_CK_GPIO_Mode                  GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC SDMMC1_IRQn */
#define MX_SDMMC1_IRQn_interruptPremptionPriority 8
#define MX_SDMMC1_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_SDMMC1_IRQn_Subriority               0

/*-------------------------------- SPI5       --------------------------------*/

#define MX_SPI5                                 1

/* GPIO Configuration */

/* Pin PF7 */
#define MX_SPI5_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI5_SCK_Pin                         PF7
#define MX_SPI5_SCK_GPIOx                       GPIOF
#define MX_SPI5_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI5_SCK_GPIO_Pin                    GPIO_PIN_7
#define MX_SPI5_SCK_GPIO_AF                     GPIO_AF5_SPI5
#define MX_SPI5_SCK_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PF8 */
#define MX_SPI5_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI5_MISO_Pin                        PF8
#define MX_SPI5_MISO_GPIOx                      GPIOF
#define MX_SPI5_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI5_MISO_GPIO_Pin                   GPIO_PIN_8
#define MX_SPI5_MISO_GPIO_AF                    GPIO_AF5_SPI5
#define MX_SPI5_MISO_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PF9 */
#define MX_SPI5_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI5_MOSI_Pin                        PF9
#define MX_SPI5_MOSI_GPIOx                      GPIOF
#define MX_SPI5_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI5_MOSI_GPIO_Pin                   GPIO_PIN_9
#define MX_SPI5_MOSI_GPIO_AF                    GPIO_AF5_SPI5
#define MX_SPI5_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP

/* DMA Configuration */

/* DMA SPI5_RX */
#define MX_SPI5_RX_DMA_Instance                 DMA1_Stream0
#define MX_SPI5_RX_DMA_FIFOMode                 DMA_FIFOMODE_DISABLE
#define MX_SPI5_RX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_SPI5_RX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_SPI5_RX_DMA_Mode                     DMA_NORMAL
#define MX_SPI5_RX_DMA_SyncRequestNumber        1
#define MX_SPI5_RX_DMA_Request                  DMA_REQUEST_SPI5_RX
#define MX_SPI5_RX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_SPI5_RX_DMA_Direction                DMA_PERIPH_TO_MEMORY
#define MX_SPI5_RX_DMA_SignalID                 NONE
#define MX_SPI5_RX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_SPI5_RX_DMA_IpInstance
#define MX_SPI5_RX_DMA_RequestNumber            1
#define MX_SPI5_RX_DMA_EventEnable              DISABLE
#define MX_SPI5_RX_DMA_SyncEnable               DISABLE
#define MX_SPI5_RX_DMA_DMA_Handle
#define MX_SPI5_RX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_SPI5_RX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_SPI5_RX_DMA_SyncSignalID             NONE
#define MX_SPI5_RX_DMA_PeriphInc                DMA_PINC_DISABLE

/* DMA SPI5_TX */
#define MX_SPI5_TX_DMA_Instance                 DMA1_Stream1
#define MX_SPI5_TX_DMA_FIFOMode                 DMA_FIFOMODE_DISABLE
#define MX_SPI5_TX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_SPI5_TX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_SPI5_TX_DMA_Mode                     DMA_NORMAL
#define MX_SPI5_TX_DMA_SyncRequestNumber        1
#define MX_SPI5_TX_DMA_Request                  DMA_REQUEST_SPI5_TX
#define MX_SPI5_TX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_SPI5_TX_DMA_Direction                DMA_MEMORY_TO_PERIPH
#define MX_SPI5_TX_DMA_SignalID                 NONE
#define MX_SPI5_TX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_SPI5_TX_DMA_IpInstance
#define MX_SPI5_TX_DMA_RequestNumber            1
#define MX_SPI5_TX_DMA_EventEnable              DISABLE
#define MX_SPI5_TX_DMA_SyncEnable               DISABLE
#define MX_SPI5_TX_DMA_DMA_Handle
#define MX_SPI5_TX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_SPI5_TX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_SPI5_TX_DMA_SyncSignalID             NONE
#define MX_SPI5_TX_DMA_PeriphInc                DMA_PINC_DISABLE

/* NVIC Configuration */

/* NVIC SPI5_IRQn */
#define MX_SPI5_IRQn_interruptPremptionPriority 8
#define MX_SPI5_IRQn_PriorityGroup              NVIC_PRIORITYGROUP_4
#define MX_SPI5_IRQn_Subriority                 0

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- USART1     --------------------------------*/

#define MX_USART1                               1

#define MX_USART1_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PB14 */
#define MX_USART1_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_TX_Pin                        PB14
#define MX_USART1_TX_GPIOx                      GPIOB
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_14
#define MX_USART1_TX_GPIO_AF                    GPIO_AF4_USART1

/* Pin PB15 */
#define MX_USART1_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_RX_Pin                        PB15
#define MX_USART1_RX_GPIOx                      GPIOB
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_15
#define MX_USART1_RX_GPIO_AF                    GPIO_AF4_USART1

/* NVIC Configuration */

/* NVIC USART1_IRQn */
#define MX_USART1_IRQn_interruptPremptionPriority 8
#define MX_USART1_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_USART1_IRQn_Subriority               0

/*-------------------------------- USART3     --------------------------------*/

#define MX_USART3                               1

#define MX_USART3_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PD8 */
#define MX_USART3_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART3_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_TX_Pin                        PD8
#define MX_USART3_TX_GPIOx                      GPIOD
#define MX_USART3_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_TX_GPIO_Pin                   GPIO_PIN_8
#define MX_USART3_TX_GPIO_AF                    GPIO_AF7_USART3

/* Pin PD9 */
#define MX_USART3_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_RX_Pin                        PD9
#define MX_USART3_RX_GPIOx                      GPIOD
#define MX_USART3_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_RX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART3_RX_GPIO_AF                    GPIO_AF7_USART3

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PF6 */
#define MX_PF6_GPIO_Speed                       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_PF6_Pin                              PF6
#define MX_PF6_GPIOx                            GPIOF
#define MX_PF6_PinState                         GPIO_PIN_SET
#define MX_PF6_GPIO_PuPd                        GPIO_NOPULL
#define MX_ARDUINO_IO_D10                       PF6
#define MX_PF6_GPIO_Pin                         GPIO_PIN_6
#define MX_PF6_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PB7 */
#define MX_PB7_Pin                              PB7
#define MX_PB7_GPIOx                            GPIOB
#define MX_PB7_GPIO_PuPd                        GPIO_NOPULL
#define MX_ARDUINO_IO_D9                        PB7
#define MX_PB7_GPIO_Pin                         GPIO_PIN_7
#define MX_PB7_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PF5 */
#define MX_PF5_Pin                              PF5
#define MX_PF5_GPIOx                            GPIOF
#define MX_PF5_GPIO_PuPd                        GPIO_NOPULL
#define MX_MemoryCard_CD0                       PF5
#define MX_PF5_GPIO_Pin                         GPIO_PIN_5
#define MX_PF5_GPIO_Mode                        GPIO_MODE_INPUT

#endif  /* __MX_DEVICE_H */

