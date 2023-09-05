/**************************************************************/
/****Author:MAHMOUD HOSSAM MOHAMED****/
/****Date  :28-Aug-2023****/
/****Version : 0.1****/
/****File Name: RCC_CONFIG_H_****/
/*************************************************************/

#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_

/**
 * YOUR OPTION IS <RCC_HSE>
 *                <RCC_HSI>
 *                <RCC_PLL>
*/
#define RCC_CLKSYSTEM     RCC_HSE

/**
 * IF DEFINE RCC_CLKSYSTEM   <RCC_HSE>
 * DRFINE RCC_CLK_BYPASS
 * YOUR OPTION IS BYPASS ---> RCC_CLK_RC 
 *  IS NOT BYPASS --->  RCC_CLK_CRYSTAL
*/
        #if RCC_CLKSYSTEM==RCC_HSE
        #define RCC_CLK_BYPASS     RCC_CLK_RC                  
      #endif 
#endif /*RCC_CONFIG_H_*/

