// 题目描述
// 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

// 输入格式
// 无
// 输出格式
// 无
// 样例输入
// a 1,
// 样例输出
// 1
// 1
// 1
// 1

//输入：字符数组        数组的内容分为四类，英文字母（大小写），空格，数字，其他字符
//输出：各个字母的个数，四个整型变量
// 题目没有给出字符串长度上限。
// 本程序暂时假定输入不超过999个字符。

#include <stdio.h>

int main()
{
    char str[100];
    int letters = 0,spaces = 0,numbers = 0,others = 0;

    scanf("%[^\n]",str);
    getchar();

    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            letters++;
        }
        else if(str[i] == ' ')
        {
            spaces++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            numbers++;
        }
        else
        {
            others++;
        }
    }
    printf("%d\n%d\n%d\n%d\n",letters,spaces,numbers,others);

    return 0;
}