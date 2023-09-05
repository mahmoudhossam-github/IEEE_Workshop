/**************************************************************/
/****Author:MAHMOUD HOSSAM MOHAMED****/
/****Date  :28-Aug-2023****/
/****Version : 0.1****/
/****File Name: RCC_PRIVATE_H_****/
/**************************************************************/
#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_
/*********************************************/
/*DEFINE ALL REGISTER IN RCC*/
#define RCC_BASE_ADDRESS              0x40021000
#define RCC_CR                      *((volatile u32*) (RCC_BASE_ADDRESS+0x00))
#define RCC_CFGR                    *((volatile u32*) (RCC_BASE_ADDRESS+0x04))                 
#define RCC_CIR                     *((volatile u32*) (RCC_BASE_ADDRESS+0x08))
#define RCC_APB2RSTR                *((volatile u32*) (RCC_BASE_ADDRESS+0x0C))
#define RCC_APB1RSTR                *((volatile u32*) (RCC_BASE_ADDRESS+0x10))
#define RCC_AHBENR                  *((volatile u32*) (RCC_BASE_ADDRESS+0x14))
#define RCC_APB2ENR                 *((volatile u32*) (RCC_BASE_ADDRESS+0x18))
#define RCC_APB1ENR                 *((volatile u32*) (RCC_BASE_ADDRESS+0x1C))
#define RCC_BDCR                    *((volatile u32*) (RCC_BASE_ADDRESS+0x20))
#define RCC_CSR                     *((volatile u32*) (RCC_BASE_ADDRESS+0x24))
/*********************************************/

/************************************/
/*in register RCC_CR DEFINE EACH BIT NO AND NAME*/
#define RCC_HSION_BIT   0
#define RCC_HSIRDY_BIT  1
#define RCC_HSEON_BIT  16
#define RCC_HSERDY_BIT  17
#define RCC_HSEBYP_BIT  18
#define RCC_CSSON_BIT  19 
#define RCC_PLLON_BIT  24
#define RCC_PLLRDY_BIT  25
/***********************************/
/*********************************/
/*DEFINE ALL TYPES OF CLK*/
#define RCC_HSI                 0
#define RCC_HSE                 1
#define RCC_PLL                 2
/********************************/

/********************************/   
/*DEFINE TYPES OF EXTRNAL CLK*/
#define RCC_CLK_CRYSTAL         0     
#define RCC_CLK_RC              1
/********************************/

#endif /* RCC_PRITAVE_H_*/
