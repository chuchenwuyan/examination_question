// 题目描述
// 编写程序，输入一个正整数n，求下列算式的值。要求定义和调用函数fact(k)计算k的阶乘，函数返回值的类型是double。
// 1+1/2+ .... +1/n!
// 输出保留五位小数
// 输入格式
// 无
// 输出格式
// 无
// 样例输入
// 5
// 样例输出
// sum=1.71667

//main负责输入，调用函数，输出
//输入一个int
//输出double类型五位小数
//main函数：
//键盘录入->for(int i = 1;i <= n;i++)->sum += i / fact(i)->打印
//fact函数：
//定义double result = 1->result *= i->return result;

#include <stdio.h>

double fact(int k)
{
    double result = 1;
    
    for(int i = 1; i <= k; i++)
    {
        result *= i;
    }

    return result;
}
int main()
{
    int n;
    double sum = 0;
    scanf("%d",&n);

    for(int i = 1;i <= n;i++)
    {
        sum += 1.0 / fact(i);
    }

    printf("sum=%.5lf",sum);
}·#include <stdio.h>

double fact(int k)
{
    double result = 1;
    
    for(int i = 1; i <= k; i++)
    {
        result *= i;
    }

    return result;
}
int main()
{
    int n;
    double sum = 0;
    scanf("%d",&n);

    for(int i = 1;i <= n;i++)
    {
        sum += 1.0 / fact(i);
    }

    printf("sum=%.5lf",sum);
}