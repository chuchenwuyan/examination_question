//根据题意，我认为需要先定义double型的变量x
//if判断x是<0,0<=x<2,2<=x<4,x>4
// 然后根据对应范围计算对应的式子

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    double result;

    scanf("%lf",&x);

    if(x < 0)
    {
        result = fabs(x);
    }
    else if(x >= 0 && x < 2)
    {
        result = sqrt(x + 1);
    }
    else if(x >= 2 && x < 4)
    {
        pow(x + 2,2);
    }
    else
    {
        result = 2 * x + 5;
    }

    printf("%.2lf\n",result);
}