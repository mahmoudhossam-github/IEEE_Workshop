/**************************************************************/
/****Author:MAHMOUD HOSSAM MOHAMED****/
/****Date  :28-Aug-2023****/
/****Version : 0.1****/
/****File Name: RCC_PROGRAM_C****/
/**************************************************************/
/*LIB*/
#include"BIT_MATH.h"
#include"STD_TYPES.h"
/*MCAL*/
 #include<stdio.h>
 #include"RCC_INTERFACE.h"
 #include"RCC_PRIVATE.h"
 #include"RCC_CONFIG.h"
int main(){

return 0;
}
Std_Return_Type Mcal_Rcc_InitClock(void)
{
Std_Return_Type Local_FuntionStatus=E_FAIL;
#if RCC_CLKSYSTEM==RCC_HSE
/**<ENABLE HSE*/
#if RCC_CLK_BYPASS == RCC_CLK_RC
   SET_BIT(RCC_CR,RCC_HSEBYP_BIT);
#elif RCC_CLK_BYPASS == RCC_CLK_CRYSTAL
   CLR_BIT(RCC_CR,RCC_HSEBYP_BIT);
#else
      #error "WRONG CHOISE"
#endif/*RCC_ CLK_BYPASS*/

/***ENABLE THE CLK*/
   SET_BIT(RCC_CR,RCC_HSEON_BIT);
   /***WAITING*/
     while (!GET_BIT(RCC_CR,RCC_HSERDY_BIT));
RCC_CFGR=0x00000001;
Std_Return_Type Local_FuntionStatus=E_OK;
/*****************************/

#elif RCC_CLKSYSTEM==RCC_HSI
/***ENABLE*/
SET_BIT(RCC_CR,RCC_HSION_BIT);
/***WAITING*/
while (!GET_BIT(RCC_CR,RCC_HSIRDY_BIT));
RCC_CFGR=0x00000000;
Std_Return_Type Local_FuntionStatus=E_OK;

/***************************/

#elif RCC_CLKSYSTEM==RCC_PLL
/**ENABLE*/
SET_BIT(RCC_CR,RCC_PLLON_BIT);
/**WAITING*/
while (!GET_BIT(RCC_CR,RCC_PLLRDY_BIT));
RCC_CFGR=0x00000010;
Std_Return_Type Local_FuntionStatus=E_OK;
/**************************/

#else 
    #error "WRONG CHOISE"
#endif/*RCC_CLKSYSTEM*/
return Local_FuntionStatus;

}

Std_Return_Type Mcal_Rcc_EnablePeripheral( u8 Copy_PeripheralId,u8 Copy_BusId){
    Std_Return_Type Local_FuntionStatus=E_FAIL;
    switch (Copy_BusId)
    {
    case RCC_AHB:
    
        SET_BIT(RCC_AHBENR,Copy_PeripheralId); 
    
        Local_FuntionStatus=E_OK;   
    break;
    case RCC_APB1:
    
        SET_BIT(RCC_APB1ENR,Copy_PeripheralId);
    
        Local_FuntionStatus=E_OK;    
    break;
    case RCC_APB2:

        SET_BIT(RCC_APB2ENR,Copy_PeripheralId);
    
        Local_FuntionStatus=E_OK;
    break;
    default:
    Local_FuntionStatus=E_FAIL;
     break;
    }
    return Local_FuntionStatus;

} 
Std_Return_Type Mcal_Rcc_DisablePeripheral(u8 Copy_PeripheralId,u8 Copy_BusId){
 
  Std_Return_Type Local_FuntionStatus=E_FAIL;
    switch (Copy_BusId)
    {
    case RCC_AHB:
    
        SET_BIT(RCC_AHBENR,Copy_PeripheralId); 
    
        Local_FuntionStatus=E_OK;   
    break;
    case RCC_APB1:
    
        SET_BIT(RCC_APB1ENR,Copy_PeripheralId);
    
        Local_FuntionStatus=E_OK;    
    break;
    case RCC_APB2:

        SET_BIT(RCC_APB2ENR,Copy_PeripheralId);
    
        Local_FuntionStatus=E_OK;
    break;
    default:
    Local_FuntionStatus=E_FAIL;
     break;
    }
    return Local_FuntionStatus;

 
}
    

