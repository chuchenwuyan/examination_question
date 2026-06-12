// 题目描述
// 输入10个整数，求它们的平均值，并输出大于平均值的数据的个数。

// 输入格式
// 10个数

// 输出格式
// 大于平均数的个数

// 样例输入
// 1 2 3 4 5 6 7 8 9 10
// 样例输出
// 5

//先输入十个整数，计算平均值，与平均值比较大小，输出
#include <stdio.h>

int main()
{
    int str[100] = {0};
    double average = 0;
    int total = 0;
    int count = 0;

    for(int i = 0;i < 10;i++)
    {
        scanf("%d",&str[i]);
        total = total + str[i];
    }
    average = total / 10;

    //比大小
    for(int i = 0;i < 10;i++)
    {
        if(str[i] > average)
        {
            count++;
        }
    }

    printf("%d\n",count);
    return 0;
}