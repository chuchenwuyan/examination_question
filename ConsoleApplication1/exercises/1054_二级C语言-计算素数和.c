// 题目描述
// 输入两个正整数m和n(m<n)，求m到n之间(包括m和n)所有素数的和，
// 要求定义并调用函数isprime(x)来判断x是否为素数(素数是除1以外只能被自身整除的自然数)。

// 输入格式
// m n

// 输出格式
// 素数和

// 样例输入
// 2 3
// 样例输出
// 5

//输入m和n，m<n。然后用函数判断是否为素数。最后素数相加
//能被整除的就不是素数
#include <stdio.h>

int isprime(int x);

int main()
{
    int m,n;
    int i;
    int total = 0;
    scanf("%d%d",&m,&n);
    for(i = m;i <= n;i++)
    {
        isprime(i);
        if(isprime(i))
        {
            total = total + i;
        }
    }
    printf("%d\n",total);
    return 0;
}
//判断是不是素数，用0和1表示，1就代表是素数。所以需要返回值
int isprime(int x)
{
    if(x < 2)
    {
        return 0;
    }

    for(int i = 2;i < x;i++)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}