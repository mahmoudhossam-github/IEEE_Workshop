/**************************************************************/
/****Author:MAHMOUD HOSSAM MOHAMED****/
/****Date  :28-Aug-2023****/
/****Version : 0.1****/
/****File Name: RCC_INTERFACE_H_****/
/*************************************************************/
#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

/**<PLLMUL>**/
#define PLL_MULTI_2   0b0000     /*؟؟ multiplication clk by 2  ?*/
#define PLL_MULTI_3   0b0001     /*؟؟ multiplication clk by 3  ??*/
#define PLL_MULTI_4   0b0010     /*؟؟ multiplication clk by 4  ??*/
#define PLL_MULTI_5   0b0011     /*؟؟ multiplication clk by 5  ??*/
#define PLL_MULTI_6   0b0100     /*؟؟ multiplication clk by 6  ??*/
#define PLL_MULTI_7   0b0101     /*؟؟ multiplication clk by 7  ??*/
#define PLL_MULTI_8   0b0110     /*؟؟ multiplication clk by 8  ??*/
#define PLL_MULTI_9   0b0111     /*؟؟ multiplication clk by 9  ??*/
#define PLL_MULTI_10  0b1000     /*؟؟ multiplication clk by 10 ??*/
#define PLL_MULTI_11  0b1001     /*؟؟ multiplication clk by 11 ??*/
#define PLL_MULTI_12  0b1010     /*؟؟ multiplication clk by 12 ??*/
#define PLL_MULTI_13  0b1011     /*؟؟ multiplication clk by 13 ??*/
#define PLL_MULTI_14  0b1100     /*؟؟ multiplication clk by 14 ??*/
#define PLL_MULTI_15  0b1101     /*؟؟ multiplication clk by 15 ??*/
#define PLL_MULTI_16  0b1110     /*؟؟ multiplication clk by 16 ??*/
#define PLL_MULTI_17  0b1111     /*؟؟ multiplication clk by 17 ??*/ 
/*<<**********************************************>>*/

/**<PERIPHERAL>**/
#define RCC_AHB      0           /*؟؟ Advanced High-performace Bus ??*/
#define RCC_APB1     1          /*؟؟ Advanced Peripheral Bus 1 ??*/
#define RCC_APB2     2         /*؟؟ Advanced Peripheral Bus 2 ??*/
/*<<**********************************************>>*/

/**<AHB>**/
#define RCC_AHB_DMA1EN_BIT   0  /*؟؟  DMA1 clock enable ??*/
#define RCC_AHB_DMA2EN_BIT   1  /*؟؟ DMA2 clock enable ??*/
#define RCC_AHB_SRAMEN_BIT   2  /*؟؟ SRAM interface clock enable ??*/
#define RCC_AHB_FLITFEN_BIT  4  /*؟؟ FLITF clock enable ??*/
#define RCC_AHB_CRCEN_BIT    6  /*؟؟ CRC clock enable ??*/
#define RCC_AHB_FSMCEN_BIT   8  /*؟؟ multiplaction clk by 2 ??*/
#define RCC_AHB_SDIOEN_BIT   10 /*؟؟ multiplaction clk by 2 ??*/
/*<<**********************************************>>*/

/**<APB1>**/*
#define RCC_APB1_TIM2EN_BIT     0   /*؟؟ Timer 2 clock enable ??*/
#define RCC_APB1_TIM3EN_BIT     1   /*؟؟ Timer 3 clock enable ??*/
#define RCC_APB1_TIM4EN_BIT     2   /*؟؟ Timer 4 clock enable ??*/
#define RCC_APB1_TIM5EN_BIT     3   /*؟؟ Timer 5 clock enable ??*/
#define RCC_APB1_TIM6EN_BIT     4   /*؟؟ Timer 6 clock enable ??*/
#define RCC_APB1_TIM7EN_BIT     5   /*؟؟ Timer 7 clock enable ??*/
#define RCC_APB1_TIM12EN_BIT    6   /*؟؟ Timer 12 clock enable ??*/
#define RCC_APB1_TIM13EN_BIT    7   /*؟؟ Timer 13 clock enable ??*/
#define RCC_APB1_TIM14EN_BIT    8   /*؟؟ Timer 14 clock enable ??*/
#define RCC_APB1_WWDGEN_BIT     11  /*؟؟ window watching clock enable ??*/
#define RCC_APB1_SPI2EN_BIT     14  /*؟؟ SPI2 clock enable  ??*/
#define RCC_APB1_SPI3EN_BIT     15  /*؟؟ SPI3 clock enable ??*/
#define RCC_APB1_USART2EN_BIT   17  /*؟؟ USART2 clock enable ??*/
#define RCC_APB1_UART4EN_BIT    19  /*؟؟ USART3 clock enable ??*/
#define RCC_APB1_USART3EN_BIT   18  /*؟؟ UART4 clock enable ??*/
#define RCC_APB1_UART5EN_BIT    20  /*؟؟ UART5 clock enable ??*/
#define RCC_APB1_I2C1EN_BIT     21  /*؟؟ I2C1 clock enable ??*/
#define RCC_APB1_I2C2EN_BIT     22  /*؟؟ I2C2 clock enable ??*/
#define RCC_APB1_USBEN_BIT      23  /*؟؟ USB clock enabl ??*/
#define RCC_APB1_CANEN_BIT      25  /*؟؟ CAN clock enable ??*/
#define RCC_APB1_BKPEN_BIT      27  /*؟؟ Backup interface clock enable ??*/
#define RCC_APB1_PWREN_BIT      28  /*؟؟ Power interface clock enable  ??*/
#define RCC_APB1_DACEN_BIT      29  /*؟؟ DAC clock enable??*/
/*<<**********************************************>>*/

/**<APB2>**/
#define RCC_APB2_AFIOEN_BIT      0   /*؟؟ Alternate function IO clock enable ??*/
#define RCC_APB2_IOPAEN_BIT      2   /*؟؟ I/O port A clock enable ??*/
#define RCC_APB2_IOPBEN_BIT      3   /*؟؟ I/O port B clock enable ??*/
#define RCC_APB2_IOPCEN_BIT      4   /*؟؟ I/O port C clock enable ??*/
#define RCC_APB2_IOPDEN_BIT      5   /*؟؟ I/O port D clock enable ??*/
#define RCC_APB2_IOPEEN_BIT      6   /*؟؟ I/O port E clock enable ??*/
#define RCC_APB2_IOPFEN_BIT      7   /*؟؟ I/O port F clock enable  ??*/
#define RCC_APB2_IOPGEN_BIT      8   /*؟؟ I/O port G clock enable ??*/
#define RCC_APB2_ADC1EN_BIT      9   /*؟؟ ADC1 clock enable ??*/
#define RCC_APB2_ADC2EN_BIT      10  /*؟؟ ADC2 clock enable ??*/
#define RCC_APB2_TIM1EN_BIT      11  /*؟؟ Timer 1 clock enable ??*/
#define RCC_APB2_SPI1EN_BIT      12  /*؟؟ SPI1 clock enable ??*/
#define RCC_APB2_TIM8EN_BIT      13  /*؟؟ UTimer 8 clock enable ??*/
#define RCC_APB2_USART1EN_BIT    14  /*؟؟ USART1 clock enable  ??*/
#define RCC_APB2_ADC3EN_BIT      15  /*؟؟ TADC3 clock enable ??*/
#define RCC_APB2_TIM9EN_BIT      19  /*؟؟ Timer 9 clock enable ??*/
#define RCC_APB2_TIM10EN_BIT     20  /*؟؟ Timer 10 clock enable ??*/
#define RCC_APB2_TIM11EN_BIT     21  /*؟؟ Timer 11 clock enable ??*/
/*<<**********************************************>>*/

/*<FUNTION INTERFACE>*/
Std_Return_Type Mcal_Rcc_InitClock(void);

Std_Return_Type Mcal_Rcc_EnablePeripheral( u8 Copy_PeripheralId,u8 Copy_BusId);

Std_Return_Type Mcal_Rcc_DisablePeripheral(u8 Copy_PeripheralId,u8 Copy_BusId);

Std_Return_Type Mcal_Rcc_PLL_MUL(u8 Copy_InputClk,u8 Copy_PllMUL);
/*<<**********************************************>>*/

#endif /*RCC_INTERFACE_H_*/
