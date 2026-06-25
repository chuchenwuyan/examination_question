// 题目描述
// 输入10个数，找出其中绝对值最小的数，将它和最后一个数交换，然后输出这10个数。

// 输入格式
// 十个数

// 输出格式
// 交换后的十个数

// 样例输入
// 10 2 30 40 50 60 70 80 90 100
// 样例输出
// 10 100 30 40 50 60 70 80 90 2
//输入:十个整型
//输出：十个整型
//思路：比较大小，交换
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int minIndex = 0;
    int temp;
    
    for(int i = 0;i < 10;i++)
    {
        scanf("%d",&num[i]);

        if(abs(num[minIndex]) > abs(num[i]))
        {
            minIndex = i;
        }
    }

    temp = num[minIndex];
    num[minIndex] = num[9];
    num[9] = temp;

    for(int i = 0;i < 10;i++)
    {
        if(i > 0)
        {
            printf(" ");
        }
        printf("%d",num[i]);
    }
    printf("\n");

    return 0;
}