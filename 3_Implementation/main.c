/**
 * @file main.c
 * @author Aarthi
 * @brief Arithmetic calculator
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"Function.h"
#include<stdio.h>
#include<math.h>
/**
 * @brief Arithmetic calculator
 * 
 * @param A  operand 1
 * @param B  operand 2
 * @return int  returns the output value
 */
int main()
{
    int A, B,C,D,E,F,G,H;
    
    C=Addition(A,B);

    D=Subtraction(A, B);

    E=Mulltiplication( A,B);

    F=Division( A,B);

    G=Modulus(A, B);

    H=Power(A,B);
    printf("C=%d,D=%d,E=%d,F=%d,G=%d,H=%d\n",C,D,E,F,G,H);
    return 0;
}

