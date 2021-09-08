
#include"Function.h"
  /**
 * @brief  finding  the Power of the number
 * 
 * @param A operand1
 * @param B operand2
 * @return int  it returns the output value
 */
int Power(int A, int B)
{
    if(B==0)
    {
        return 1;
    }
    else
    {
        int i,pow=1;
        for(i=pow;i<=B;i++)
        {
            pow*=A;
        }
        return pow;
    }
}
