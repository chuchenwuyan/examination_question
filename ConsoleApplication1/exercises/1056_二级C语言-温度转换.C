// 题目描述
// 输入一个华氏温度，要求输出摄氏温度。公式为

// 二级C语言-温度转换

// 保留两位小数

// 输入格式
// 无
// 输出格式
// 无
// 样例输入
// -40
// 样例输出
// -40.00

//double C = (F - 32) * 5 / 9
#include <stdio.h>

int main()
{
    double F;
    scanf("%lf",&F);
    double C = (F - 32) * 5 / 9;

    printf("%.2f",C);
    return 0;
}