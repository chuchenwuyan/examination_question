#include <stdio.h>

/*
题目目标：
输入字符串长度 n、一个字符串、起始位置 m。
请自定义一个函数，把原字符串中从第 m 个字符开始到末尾的内容，
复制到另一个字符串中，并输出这个子串。

注意：
第 m 个字符是按人习惯从 1 开始数的，不是数组下标。
*/
void StrCopy(int n,char str[],char result[],int m);

int main()
{
    // TODO: 定义需要的变量
    int n;
    char str[100];
    char result[100];
    int m;

    // TODO: 输入 n、字符串、m
    scanf("%d",&n);
    scanf("%99s",str);
    scanf("%d",&m);


    // TODO: 调用你自己写的字符串拷贝函数
    StrCopy(n,str,result,m);

    // TODO: 输出从第 m 个字符开始的子串
    printf("%s\n",result);

    return 0;
}

void StrCopy(int n,char str[],char result[],int m)
{
    //第m个字符，实际下标应该是m-1
    int j = 0;
    for(int i = (m - 1);i < n;i++)
    {
        result[j] = str[i];
        j++;
    }
    result[j] = '\0';
}