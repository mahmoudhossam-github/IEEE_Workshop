/**************************************************************/
/****Author:MAHMOUD HOSSAM MOHAMED****/
/****Date  :29-Aug-2023****/
/****Version : 0.1****/
/****File Name: GPIO_PROGRAM.c****/
/**************************************************************/
/*LIB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
/*MCAL*/
#include "GPIO_INTERFACE.h"
#include"GPIO_PRITAVE.h"
#include "GPIO_CONFIG.h"




Std_Return_Type Mcal_Gpio_SetPinMode(u8 Copy_PortId,u8 Copy_PinId,u8 Copy_PinMode)
{
Std_Return_Type LocalFuntionStatus=E_FAIL;
switch (Copy_PortId)
{
case GPIO_PORTA :
if (Copy_PinId<=7)
{
    GPIO_PORTA_GPIO_CRL &=~((0b1111)<<(Copy_PinId*4));
    GPIO_PORTA_GPIO_CRL |=(Copy_PinMode<<(Copy_PinId*4));
   LocalFuntionStatus=E_OK;

}else if (Copy_PinId<=15)
{    GPIO_PORTA_GPIO_CRH &=~((0b1111)<<(Copy_PinId*4));
     GPIO_PORTA_GPIO_CRH |=(Copy_PinMode<<(Copy_PinId*4));
   LocalFuntionStatus=E_OK;
    
}
else{
    LocalFuntionStatus=E_FAIL;
}
    break;
case GPIO_PORTB :
if (Copy_PinId<=7)
{
 
 GPIO_PORTB_GPIO_CRL &=~((0b1111)<<(Copy_PinId*4));
 GPIO_PORTB_GPIO_CRL |=(Copy_PinMode<<(Copy_PinId*4));
   LocalFuntionStatus=E_OK;


}else if (Copy_PinId<=15)
{
   GPIO_PORTB_GPIO_CRH &=~((0b1111)<<(Copy_PinId*4));
   GPIO_PORTB_GPIO_CRH |=(Copy_PinMode<<(Copy_PinId*4));   
   LocalFuntionStatus=E_OK;

}
else{
    LocalFuntionStatus=E_FAIL;
}
break;
case GPIO_PORTC :
if (Copy_PinId<=7)
{
   GPIO_PORTC_GPIO_CRL &=~((0b1111)<<(Copy_PinId*4));
   GPIO_PORTC_GPIO_CRL |=(Copy_PinMode<<(Copy_PinId*4));
   LocalFuntionStatus=E_OK;

}else if (Copy_PinId<=15)
{
    GPIO_PORTC_GPIO_CRH &=~((0b1111)<<(Copy_PinId*4));
    GPIO_PORTC_GPIO_CRH |=(Copy_PinMode<<(Copy_PinId*4));
   LocalFuntionStatus=E_OK;

}
else{
    LocalFuntionStatus=E_FAIL;
}
break;
default:
LocalFuntionStatus=E_FAIL;
    break;
}


return LocalFuntionStatus;
}