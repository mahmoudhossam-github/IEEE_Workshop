/**************************************************************/
/****Author:MAHMOUD HOSSAM MOHAMED****/
/****Date  :28-Aug-2023****/
/****Version : 0.1****/
/****File Name: RCC_INTERFACE_H_****/
/*************************************************************/

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_
/*************AHB*/
#define RCC_AHB      0
#define RCC_APB1     1
#define RCC_APB2     2
#define RCC_AHB_DMA1EN_BIT   0
#define RCC_AHB_DMA2EN_BIT   1
#define RCC_AHB_SRAMEN_BIT   2
#define RCC_AHB_FLITFEN_BIT  4
#define RCC_AHB_CRCEN_BIT    6
#define RCC_AHB_FSMCEN_BIT   8
#define RCC_AHB_SDIOEN_BIT   10
/**************APB1*/
#define RCC_APB1_TIM2EN_BIT  0
#define RCC_APB1_TIM3EN_BIT  1
#define RCC_APB1_TIM4EN_BIT  2
#define RCC_APB1_TIM5EN_BIT  3
#define RCC_APB1_TIM6EN_BIT  4
#define RCC_APB1_TIM7EN_BIT  5
#define RCC_APB1_TIM12EN_BIT 6
#define RCC_APB1_TIM13EN_BIT 7
#define RCC_APB1_TIM14EN_BIT 8
#define RCC_APB1_WWDGEN_BIT  11
#define RCC_APB1_SPI2EN_BIT  14
#define RCC_APB1_SPI3EN_BIT  15
#define RCC_APB1_USART2EN_BIT 17 
#define RCC_APB1_USART3EN_BIT 18
#define RCC_APB1_UART4EN_BIT  19
#define RCC_APB1_UART5EN_BIT  20
#define RCC_APB1_I2C1EN_BIT   21
#define RCC_APB1_I2C2EN_BIT   22
#define RCC_APB1_USBEN_BIT    23
#define RCC_APB1_CANEN_BIT    25
#define RCC_APB1_BKPEN_BIT    27
#define RCC_APB1_PWREN_BIT    28
#define RCC_APB1_DACEN_BIT    29
/***********************APB2*/
#define RCC_APB2_AFIOEN_BIT 0
#define RCC_APB2_IOPAEN_BIT 2
#define RCC_APB2_IOPBEN_BIT 3
#define RCC_APB2_IOPCEN_BIT 4
#define RCC_APB2_IOPDEN_BIT 5
#define RCC_APB2_IOPEEN_BIT 6
#define RCC_APB2_IOPFEN_BIT 7
#define RCC_APB2_IOPGEN_BIT 8
#define RCC_APB2_ADC1EN_BIT 9
#define RCC_APB2_ADC2EN_BIT 10
#define RCC_APB2_TIM1EN_BIT 11
#define RCC_APB2_SPI1EN_BIT 12
#define RCC_APB2_TIM8EN_BIT 13
#define RCC_APB2_USART1EN_BIT 14
#define RCC_APB2_ADC3EN_BIT 15
#define RCC_APB2_TIM9EN_BIT 19
#define RCC_APB2_TIM10EN_BIT 20
#define RCC_APB2_TIM11EN_BIT 21 


Std_Return_Type Mcal_Rcc_InitClock(void);
Std_Return_Type Mcal_Rcc_EnablePeripheral( u8 Copy_PeripheralId,u8 Copy_BusId);
Std_Return_Type Mcal_Rcc_DisablePeripheral(u8 Copy_PeripheralId,u8 Copy_BusId);

#endif /*RCC_INTERFACE_H_*/
