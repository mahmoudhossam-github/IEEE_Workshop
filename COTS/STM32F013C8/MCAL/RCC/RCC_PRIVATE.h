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
/**
 * RCC Control Register (CR)
 * This register provides control over the main and PLL (Phase-Locked Loop) system clocks.
 */
#define RCC_CR                      *((volatile u32*) (RCC_BASE_ADDRESS+0x00))
/**
 *  RCC Configuration Register (CFGR)
 * This register configures the system clock sources, prescalers, and peripherals clocks.
 */
#define RCC_CFGR                    *((volatile u32*) (RCC_BASE_ADDRESS+0x04))
/**
 *  RCC Clock Interrupt Register (CIR)
 * This register manages clock interrupts and flags.
 */             
#define RCC_CIR                     *((volatile u32*) (RCC_BASE_ADDRESS+0x08))
/**
 * RCC APB2 Peripheral Reset Register (APB2RSTR)
 * This register controls the reset state of peripherals connected to APB2 bus.
 */
#define RCC_APB2RSTR                *((volatile u32*) (RCC_BASE_ADDRESS+0x0C))
/**
 * RCC APB1 Peripheral Reset Register (APB1RSTR)
 * This register controls the reset state of peripherals connected to APB1 bus.
 */
#define RCC_APB1RSTR                *((volatile u32*) (RCC_BASE_ADDRESS+0x10))
/**
 * RCC AHB Peripheral Clock Enable Register (AHBENR)
 * This register enables clock access for peripherals connected to AHB bus.
 */
#define RCC_AHBENR                  *((volatile u32*) (RCC_BASE_ADDRESS+0x14))
/**
 *  RCC APB1 Peripheral Clock Enable Register (APB1ENR)
 * This register enables clock access for peripherals connected to APB1 bus.
 */
#define RCC_APB2ENR                 *((volatile u32*) (RCC_BASE_ADDRESS+0x18))
/**
 *  RCC APB2 Peripheral Clock Enable Register (APB2ENR)
 * This register enables clock access for peripherals connected to APB2 bus.
 */
#define RCC_APB1ENR                 *((volatile u32*) (RCC_BASE_ADDRESS+0x1C))
/**
 *  RCC Backup Domain Control Register (BDCR)
 * This register provides control over backup domain and RTC (Real-Time Clock).
 */
#define RCC_BDCR                    *((volatile u32*) (RCC_BASE_ADDRESS+0x20))
/**
 *  RCC Control and Status Register (CSR)
 * This register provides various control and status flags.
 */
#define RCC_CSR                     *((volatile u32*) (RCC_BASE_ADDRESS+0x24))
/*********************************************/

/************************************/
/*in register RCC_CR DEFINE EACH BIT NO AND NAME*/
#define RCC_HSION_BIT   0       
#define RCC_HSIRDY_BIT  1
#define RCC_HSEON_BIT   16
#define RCC_HSERDY_BIT  17
#define RCC_HSEBYP_BIT  18
#define RCC_CSSON_BIT   19 
#define RCC_PLLON_BIT   24
#define RCC_PLLRDY_BIT  25
/***********************************/
/*in register RCC_CFGR DEFINE EACH BIT NO AND NAMW*/
#define RCC_PLLSRC_BIT 16
/**********************************DEFINE ALL TYPES OF CLK*/
#define RCC_HSI                  0  /*؟؟ The high speed external ??*/
#define RCC_HSE                 1  /*؟؟ The high speed internal ??*/
#define RCC_PLL                 2  /*؟؟ phase locked loop??/ ??*/
/********************************/

/********************************/   
/*DEFINE TYPES OF EXTRNAL CLK*/
#define RCC_CLK_CRYSTAL         0  /**؟؟ Crystal Oscillator Clock Type ??*/   
#define RCC_CLK_RC              1 /**؟؟ Crystal Oscillator Clock Type ??*/
/********************************/


#endif /* RCC_PRITAVE_H_*/
