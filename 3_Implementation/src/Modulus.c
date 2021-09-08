/**
 * @file Modulus.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"Function.h"
/**
 * @brief  function to find modulus of two numbers
 * 
 * @param A operand1
 * @param B operand2
 * @return int  it returns the output value
 */
int Mod(int A ,int B)
{
        int REM=0;
        REM=A%B;
        return REM;
    
}