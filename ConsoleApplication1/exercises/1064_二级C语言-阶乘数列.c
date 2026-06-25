// 题目描述
// 求1+2!+3!+4!+…+30!。

// 科学计数法，保留两位小数。

// 输入格式
// 无
// 输出格式
// 无
// 样例输入
// 无
// 样例输出
// 无

//输入：无
//输出：long long 类型变量
//边界：变量类型范围需要比结果大
#include <stdio.h>

int main()
{
    long double factorial = 1.0L;
    long double total = 0;

    for(int i = 1;i <= 30;i++)
    {
        factorial *= i;
        total += factorial;
    }
    printf("%.2Le\n",total);

    return 0;
}