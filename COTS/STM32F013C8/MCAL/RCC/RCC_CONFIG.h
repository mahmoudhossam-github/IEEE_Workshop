/**************************************************************/
/****Author:MAHMOUD HOSSAM MOHAMED****/
/****Date  :28-Aug-2023****/
/****Version : 0.1****/
/****File Name: RCC_CONFIG.h****/
/*************************************************************/

#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_

/**
 * YOUR OPTION IS <RCC_HSE> /؟؟The high speed external clock signal??/
 *                <RCC_HSI> /؟؟The high speed internal clock signal??/
 *                <RCC_PLL> /؟؟phase locked loop??/
*/
#define RCC_CLKSYSTEM     RCC_PLL

/**
 * IF DEFINE RCC_CLKSYSTEM   <RCC_HSE>
 * DRFINE RCC_CLK_BYPASS
 * YOUR OPTION IS BYPASS ---> RCC_CLK_RC      /**؟؟ Crystal Oscillator Clock Type ??*/ 
/*IS NOT BYPASS --->  RCC_CLK_CRYSTAL  */      /**؟؟ Crystal Oscillator Clock Type ??*/

        #if RCC_CLKSYSTEM==RCC_HSE
        #define RCC_CLK_BYPASS     RCC_CLK_RC                  
      #endif 
/**
 * if you want to make pll the clk 
 * we have many option
 * your option :
 *              <PLL_MULTI_2>    /؟؟ multiplication clk by 2  ??/
 *              <PLL_MULTI_3>    /؟؟ multiplication clk by 3  ??/
 *              <PLL_MULTI_4>    /؟؟ multiplication clk by 4  ??/
 *              <PLL_MULTI_5>    /؟؟ multiplication clk by 5  ??/
 *              <PLL_MULTI_6>    /؟؟ multiplication clk by 6  ??/
 *              <PLL_MULTI_7>    /؟؟ multiplication clk by 7  ??/
 *              <PLL_MULTI_8>    /؟؟ multiplication clk by 8  ??/
 *              <PLL_MULTI_9>    /؟؟ multiplication clk by 9  ??/
 *              <PLL_MULTI_10>   /؟؟ multiplication clk by 10 ??/
 *              <PLL_MULTI_11>   /؟؟ multiplication clk by 11 ??/
 *              <PLL_MULTI_12>   /؟؟ multiplication clk by 12 ??/
 *              <PLL_MULTI_13>   /؟؟ multiplication clk by 13 ??/
 *              <PLL_MULTI_14>   /؟؟ multiplication clk by 14 ??/
 *              <PLL_MULTI_15>   /؟؟ multiplication clk by 15 ??/
 *              <PLL_MULTI_16>   /؟؟ multiplication clk by 16 ??/
 *              <PLL_MULTI_17>   /؟؟ multiplication clk by 17 ??/
  
 */ 
 #define RCC_PLL_MULT   PLL_MULTI_2


#endif /*RCC_CONFIG_H_*/

