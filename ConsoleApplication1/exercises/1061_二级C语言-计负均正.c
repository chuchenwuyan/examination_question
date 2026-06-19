// 题目描述
// 从键盘输入任意20个整型数，统计其中的负数个数并求所有正数的平均值。

// 保留两位小数

// 输入格式
// 无
// 输出格式
// 无
// 样例输入
// 1 2 3 4 5 6 7 8 9 10
// -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
// 样例输出
// 10
// 5.50

// 需要有20个个整型数，那就int num[20];
// for(int i = 0;i <= 19;i++),循环录入
// 然后判断正负,负数就count++,正数就total += num[i]
#include <stdio.h>

int main()
{
    int num[20];
    int count = 0,total = 0,positive_count = 0;

    for(int i = 0;i < 20;i++)
    {
        scanf("%d",&num[i]);

        if(num[i] < 0)
        {
            count++;
        }
        else if(num[i] > 0)
        {
            total += num[i];
            positive_count++;
        }
    }
    //average
    double average = total * 1.0 / positive_count;

    printf("%d\n%.2f\n",count,average);

    return 0;
}