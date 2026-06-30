// 题目描述
// 输入一个正数x和一个正整数n，求下列算式的值。
// 要求定义两个调用函数：fact(n)计算n的阶乘；mypow(x,n)计算x的n次幂（即xn），
// 两个函数的返回值类型是double。

//       x - x2/2! + x3/3! + ... + (-1)n-1xn/n!

// ×输出保留4位小数。

// 输入格式
// x n

// 输出格式
// 数列和

// 样例输入
// 2.0 3
// 样例输出
// 1.3333
//输入：double x和int n
//输出：两double变量
//函数需要返回值，类型double
#include <stdio.h>

double fact(int n);
double mypow(double x,int n);

int main()
{
    double x;
    int n;
    double sum = 0;

    scanf("%lf%d",&x,&n);

    for(int i = 1;i <= n;i++)
    {
        double term = mypow(x,i) / fact(i);
        if(i % 2 == 1)
        {
            sum += term;
        }
        else
        {
            sum -=term;
        }
    }

    printf("%.4f\n",sum);

    return 0;
}

double fact(int n)
{
    double factorial = 1;

    for(int i = 1;i <= n;i++)
    {
        factorial *= i;
    }

    return factorial;
}
double mypow(double x,int n)
{
    double result = 1;
    for(int i = 0;i < n;i++)
    {
        result *= x;
    }

    return result;
}