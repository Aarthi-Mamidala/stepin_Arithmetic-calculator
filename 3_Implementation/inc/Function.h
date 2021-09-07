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
#ifndef __FUNCTION_H__
#define __FUNCTION_H__
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

    int Addition(int A, int B);/* Addition two numbers*/
    
    int Subtraction(int A, int B);/* Subtraction two numbers */

    int Multipilication(int A, int B);/* Multiplication two numbers */

    int Division(int A, int B);/* Division two numbers  */

    int Modulus(int A, int B);/* Modulus two numbers  */

    int Power(int A, int B);/* Power of  numbers  */


#endif
