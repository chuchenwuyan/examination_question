// 题目描述
// sum=2+5+8+11+14+…，输入正整数n，求sum的前n项和。

// 输入格式
// 无
// 输出格式
// 无
// 样例输入
// 2
// 样例输出
// 7

#include <stdio.h>

int main()
{
    int n,sum;
    int total = 0;

    scanf("%d",&n);
    
    for(int i = 0;i < n;i++)
    {
        sum = 2 +(3 * i);
        total += sum;
    }
    printf("%d\n",total);
    return 0;
}