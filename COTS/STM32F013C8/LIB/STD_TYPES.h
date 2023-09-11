/**************************************************************/
/****Author:MAHMOUD HOSSAM MOHAMED****/
/****Date  :28-Aug-2023****/
/****Version : 0.1****/
/****File Name: STD_TYPES.h****/
/*************************************************************/
#ifndef STD_TYPES_H_
#define STD_TYPES_H_
/** DEFINE:UNSIGNED*/
typedef unsigned char            u8;
typedef unsigned short           u16;
typedef unsigned int             u32;
typedef unsigned long long       u64;
/** DEFINE:SIGNED*/
typedef signed char              s8;
typedef signed short             s16;
typedef signed int               s32;
typedef signed long long         s64;
/** DEFINE: FLOAT*/
typedef float                    f32;
typedef double                   f64;
typedef long double              f96; 
/** DEFINE:Std_Return_Type*/
typedef u8   Std_Return_Type;   
#define E_OK (Std_Return_Type)1
#define E_FAIL (Std_Return_Type)0
#endif /* STD_TYPES_H_*/

