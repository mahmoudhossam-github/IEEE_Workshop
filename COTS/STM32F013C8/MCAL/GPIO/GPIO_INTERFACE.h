/**************************************************************/
/****Author:MAHMOUD HOSSAM MOHAMED****/
/****Date  :29-Aug-2023****/
/****Version : 0.1****/
/****File Name: GPIO_INTERFACE.h****/
/**************************************************************/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H
/***************************************/
#define GPIO_PORTA 0
#define GPIO_PORTB 1
#define GPIO_PORTC 2
/*************************************************/
#define GPIO_PIN_0   0
#define GPIO_PIN_1   1
#define GPIO_PIN_2   2
#define GPIO_PIN_3   3
#define GPIO_PIN_4   4
#define GPIO_PIN_5   5
#define GPIO_PIN_6   6
#define GPIO_PIN_7   7
#define GPIO_PIN_8   8
#define GPIO_PIN_9   9
#define GPIO_PIN_10  10
#define GPIO_PIN_11  11
#define GPIO_PIN_12  12
#define GPIO_PIN_13  13
#define GPIO_PIN_14  14
#define GPIO_PIN_15  15
/**************************************/
#define GPIO_INPUT_ANALOG    0b0000
#define GPIO_INPUT_FLOATING  0b0100
#define GPIO_INPUT_PULL_UP   0b1000
#define GPIO_INPUT_PULL_DOWN 0b1000
/**************************************/
#define GPIO_OUTPUT_10MHz_PUSH_PULL      0b0001
#define GPIO_OUTPUT_10MHz_OPEN_DRAIN     0b0101
#define GPIO_OUTPUT_10MHz_AF_PUSH_PULL   0b1001
#define GPIO_OUTPUT_10MHz_AF_OPEN_DRAIN  0b1101
/**************************************/
#define GPIO_OUTPUT_2MHz_PUSH_PULL       0b0010
#define GPIO_OUTPUT_2MHz_OPEN_DRAIN      0b0110
#define GPIO_OUTPUT_2MHz_AF_PUSH_PULL    0b1010
#define GPIO_OUTPUT_2MHz_AF_OPEN_DRAIN   0b1110
/*************************************/
#define GPIO_OUTPUT_50Hz_PUSH_PULL       0b0011
#define GPIO_OUTPUT_50MHz_OPEN_DRAIN     0b0111
#define GPIO_OUTPUT_50MHz_AF_PUSH_PULL   0b1011
#define GPIO_OUTPUT_50MHz_AF_OPEN_DRAI   0b1111
/*****************************************/
#define GPIO_PIN_VALUE_LOW       0
#define GPIO_PIN_VALUE_HIGH      1
/*****************************************/
Std_Return_Type Mcal_Gpio_SetPinMode(u8 Copy_PortId,u8 Copy_PinId,u8 Copy_PinMode);
Std_Return_Type Mcal_Gpio_SetPinValue(u8 Copy_PortId,u8 Copy_PinId,u8 Copy_PinValue);
Std_Return_Type Mcal_Gpio_GetPinValue(u8 Copy_PortId,u8 Copy_PinId,u8 *Copy_PinGetValue);
/*****************************************/
#endif /*GPIO_INTERFACE_H*/