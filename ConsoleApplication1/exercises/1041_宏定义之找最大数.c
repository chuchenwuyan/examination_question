#include <stdio.h>

double max_fun(double a,double b,double c);
#define MAX2(x, y) ((x) > (y) ? (x) : (y))  //这个问号是干什么的
#define MAX3(a, b, c) (MAX2(MAX2((a), (b)), (c)))
//为什么这里两个宏的形参不同？，都用abc不行吗？

int main()
{
    //准备
    double a,b,c;
    scanf("%lf%lf%lf", &a, &b, &c);

    //比大小
    double max_function = max_fun(a,b,c);
    double max3 = MAX3(a,b,c);

    //打印
    printf("%.3f\n", max_function);
    printf("%.3f\n", max3);

    return 0;
}
//函数比大小
double max_fun(double a,double b,double c)
{
    double max = a;
    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    return max;
}