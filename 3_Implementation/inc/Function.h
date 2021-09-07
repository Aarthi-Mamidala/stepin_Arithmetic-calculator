/**
 * @file Function.h
 * @author Aarthi
 * @brief Header file
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __MAIN_H__
#define __MAIN_H__
/*
typedef enum Error
{
    Error_div_by_Zero=0,
}error;
*/

/**
 * @brief Arithmetic Calculator 
 * 
 * @param A  operand1
 * @param B operand2
 * @return int to return the value
 */

    int Add1(int A, int B);/* Addition two ints */
    
    int Sub1(int A, int B);/* Subtraction two ints */

    int Mul1(int A, int B);/* Multiplication two ints */

    int Div1(int A, int B);/* Division two ints */

    int Mod1(int A, int B);/* Modulus two ints */

    int Power(int A, int B);/* Power of  ints */


#endif
