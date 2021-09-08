/**
 * @file Division.c
 * @author Aarthi 
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 * */
#include "Function.h"
/**
 * @brief  Division of two numbers
 * 
 * @param A operand1
 * @param B operand2
 * @return int  it returns the output value
 */

int Division(int A, int B)
{
     if(B==0)
    {
        return 0;
    }
    else
    {
    return A/B;
    }
}
