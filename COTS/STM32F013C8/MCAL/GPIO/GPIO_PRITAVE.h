/**************************************************************/
/****Author:MAHMOUD HOSSAM MOHAMED****/
/****Date  :29-Aug-2023****/
/****Version : 0.1****/
/****File Name: GPIO_PRITAVE.h****/
/**************************************************************/
#ifndef GPIO_PRITAVE_H
#define GPIO_PRITAVE_H

 #define GPIO_PORTA_BASE_ADDRESS  0x40010800
 #define GPIO_PORTB_BASE_ADDRESS  0x40010C00
 #define GPIO_PORTC_BASE_ADDRESS  0x40011000
 #define GPIO_PORTA_GPIO_CRL  *((volatile u32*) (GPIO_PORTA_BASE_ADDRESS+0x00))
 #define GPIO_PORTA_GPIO_CRH   *((volatile u32*) (GPIO_PORTA_BASE_ADDRESS+0x04))
 #define GPIO_PORTA_GPIO_IDR   *((volatile u32*) (GPIO_PORTA_BASE_ADDRESS+0x08))
 #define GPIO_PORTA_GPIO_ODR   *((volatile u32*) (GPIO_PORTA_BASE_ADDRESS+0x0C))
 #define GPIO_PORTA_GPIO_BSRR  *((volatile u32*) (GPIO_PORTA_BASE_ADDRESS+0x10))
 #define GPIO_PORTA_GPIO_BRR   *((volatile u32*) (GPIO_PORTA_BASE_ADDRESS+0x14))
 #define GPIO_PORTA_GPIO_LCKR  *((volatile u32*) (GPIO_PORTA_BASE_ADDRESS+0x18))
 /*************/
 #define GPIO_PORTB_GPIO_CRL  *((volatile u32*) (GPIO_PORTB_BASE_ADDRESS+0x00))
 #define GPIO_PORTB_GPIO_CRH   *((volatile u32*) (GPIO_PORTB_BASE_ADDRESS+0x04))
 #define GPIO_PORTB_GPIO_IDR   *((volatile u32*) (GPIO_PORTB_BASE_ADDRESS+0x08))
 #define GPIO_PORTB_GPIO_ODR   *((volatile u32*) (GPIO_PORTB_BASE_ADDRESS+0x0C))
 #define GPIO_PORTB_GPIO_BSRR  *((volatile u32*) (GPIO_PORTB_BASE_ADDRESS+0x10))
 #define GPIO_PORTB_GPIO_BRR   *((volatile u32*) (GPIO_PORTB_BASE_ADDRESS+0x14))
 #define GPIO_PORTB_GPIO_LCKR  *((volatile u32*) (GPIO_PORTB_BASE_ADDRESS+0x18))
 /***************************/
 #define GPIO_PORTC_GPIO_CRL  *((volatile u32*) (GPIO_PORTC_BASE_ADDRESS+0x00))
 #define GPIO_PORTC_GPIO_CRH   *((volatile u32*) (GPIO_PORTC_BASE_ADDRESS+0x04))
 #define GPIO_PORTC_GPIO_IDR   *((volatile u32*) (GPIO_PORTC_BASE_ADDRESS+0x08))
 #define GPIO_PORTC_GPIO_ODR   *((volatile u32*) (GPIO_PORTC_BASE_ADDRESS+0x0C))
 #define GPIO_PORTC_GPIO_BSRR  *((volatile u32*) (GPIO_PORTC_BASE_ADDRESS+0x10))
 #define GPIO_PORTC_GPIO_BRR   *((volatile u32*) (GPIO_PORTC_BASE_ADDRESS+0x14))
 #define GPIO_PORTC_GPIO_LCKR  *((volatile u32*) (GPIO_PORTC_BASE_ADDRESS+0x18))
 /****************************/
 #define NULL (void*)0
#endif /*GPIO_PRITAVE_H*/