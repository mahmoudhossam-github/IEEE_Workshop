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
Std_Return_Type Mcal_Gpio_SetPinValue(u8 Copy_PortId,u8 Copy_PinId,u8 Copy_PinValue)
{

Std_Return_Type LocalFuntionStatus=E_FAIL;
switch (Copy_PortId)
{
case GPIO_PORTA:
   switch (Copy_PinValue)
   {
   case GPIO_PIN_VALUE_HIGH:
    SET_BIT(GPIO_PORTA_GPIO_ODR,Copy_PinId);
    LocalFuntionStatus=E_OK;
    break;
   case GPIO_PIN_VALUE_LOW:
   CLEAR_BIT(GPIO_PORTA_GPIO_ODR,Copy_PinId);
   LocalFuntionStatus=E_OK;
    break;
    default:
   LocalFuntionStatus=E_FAIL;
    break;
   }
    break;
case GPIO_PORTB:
switch (Copy_PinValue)
{
case GPIO_PIN_VALUE_HIGH:
    SET_BIT(GPIO_PORTB_GPIO_ODR,Copy_PinId);
    LocalFuntionStatus=E_OK;
    break;
case GPIO_PIN_VALUE_LOW:
CLEAR_BIT(GPIO_PORTB_GPIO_ODR,Copy_PinId);
LocalFuntionStatus=E_OK;
 break;
default:
LocalFuntionStatus=E_FAIL;
    break;
}

case GPIO_PORTC:
switch (Copy_PinValue)
{ case GPIO_PIN_VALUE_HIGH:
    SET_BIT(GPIO_PORTC_GPIO_ODR,Copy_PinId);  
LocalFuntionStatus=E_OK;
    break;
case GPIO_PIN_VALUE_LOW:
   CLEAR_BIT(GPIO_PORTC_GPIO_ODR,Copy_PinId);
LocalFuntionStatus=E_OK;
default:
LocalFuntionStatus=E_FAIL;
    break;
}

default:
    LocalFuntionStatus=E_FAIL;
    break;
}

return LocalFuntionStatus;

}
Std_Return_Type Mcal_Gpio_GetPinValue(u8 Copy_PortId,u8 Copy_PinId,u8 *Copy_PinGetValue)
{
Std_Return_Type LocalFuntionStatus=E_FAIL;

if(*Copy_PinGetValue!=NULL){
switch (Copy_PortId)
{
case GPIO_PORTA:
  *Copy_PinGetValue=GET_BIT(GPIO_PORTA_GPIO_IDR,Copy_PinId);
  LocalFuntionStatus=E_OK;
    break;
case GPIO_PORTB:
*Copy_PinGetValue=GET_BIT(GPIO_PORTB_GPIO_IDR,Copy_PinId);
  LocalFuntionStatus=E_OK;
    break;
    case GPIO_PORTC:
    *Copy_PinGetValue=GET_BIT(GPIO_PORTC_GPIO_IDR,Copy_PinId);
    LocalFuntionStatus=E_OK;
default:
    LocalFuntionStatus=E_FAIL;
    break;
}
return LocalFuntionStatus;
}

else{
    LocalFuntionStatus=E_FAIL;
    return LocalFuntionStatus;
}

}