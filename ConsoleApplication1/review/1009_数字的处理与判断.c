// 题目描述
// 给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
// 输入格式
// 一个不大于5位的数字
// 输出格式
// 三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数
// 样例输入
// 12345
// 样例输出
// 5
// 1 2 3 4 5
// 54321

//输入：整数 一个
//输出：输出这是几位数 输出每一个数字  逆序输出每一个数字
//边界：小于等于5位
#include <stdio.h>

int main()
{
    char num[6];
    int count = 0;

    scanf("%5s", num);

    while(num[count] != '\0')
    {
        count++;
    }

    printf("%d\n",count);

    for(int i = 0; i < count; i++)
    {
        if(i > 0)
        {
            printf(" ");
        }

        printf("%c", num[i]);
    }
    printf("\n");

    for(int i = count - 1; i >= 0; i--)
    {
        printf("%c", num[i]);
    }
    printf("\n");

    return 0;
}