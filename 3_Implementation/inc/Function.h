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
    Power_Zero=1,
}error;
*/

/**
 * @brief Arithmetic-Calculator 
 * 
 * @param A  operand1
 * @param B operand2
 * @return int to return the value
 */

    int Addition(int A, int B);
    
    int Subtraction(int A, int B);

    int Mulltiplication(int A, int B);

    int Division(int A, int B);

    int Modulus(int A, int B);

    int Power(int A, int B);


#endif
