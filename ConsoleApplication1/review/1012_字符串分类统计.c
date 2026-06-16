// 题目描述
// 输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。

// 输入格式
// 一行字符,长度不超过200

// 输出格式
// 统计值

// 样例输入
// aklsjflj123 sadf918u324 asdf91u32oasdf/.';123
// 样例输出
// 23 16 2 4

//因为键盘录入字符串的大小是不确定的，所以就用%^[\n]来输入。然后getchar()
//有四个变量去计数letters = 0, numbers = 0,spaces = 0, others = 0;
#include <stdio.h>

int main()
{
    char str[201];
    int letters = 0, numbers = 0,spaces = 0, others = 0;

    scanf("%[^\n]",str);

    for(int i = 0;str[i] != '\0';i++)
    {
        char s = str[i];
        if((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
        {
            letters++;
        }
        else if(s >= '0' && s <= '9')
        {
            numbers++;
        }
        else if(s == ' ')
        {
            spaces++;
        }
        else
        {
            others++;
        }
    }
    
    printf("%d %d %d %d\n", letters, numbers, spaces, others);
}