// 题目描述
// 求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
// 输入格式
// a b c
// 输出格式
// 1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c
// 样例输入
// 100 50 10
// 样例输出
// 47977.93

//最简单，a的和，直接循环相加。
//b：i * i
//c:1 / i

//输入：三个int
// 输出：double
//边界：
#include <stdio.h>

int main()
{
    int a,b,c;
    double result_a = 0,result_b = 0,result_c = 0;
    double total = 0;

    scanf("%d%d%d",&a,&b,&c);

    for(int i = 1;i <= a;i++)
    {
        result_a += i;
    }
    for(int i = 1;i <= b;i++)
    {
        result_b += i * i;
    }
    for(int i = 1;i <= c;i++)
    {
        result_c += 1.0 / i;
    }

    total = result_a + result_b + result_c;

    printf("%.2lf\n",total);
}