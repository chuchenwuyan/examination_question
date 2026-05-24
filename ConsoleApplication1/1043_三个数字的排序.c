#include <stdio.h>

int main()
{
    //准备数据
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);

    //交换
    if(a >b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    //两遍比较如果每一次a都小，那么现在就是最小值a
    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d %d %d \n",a,b,c);

    return 0;
}