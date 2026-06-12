#include <stdio.h>
/*题目描述
输入两个整数，求他们相除的余数。用带参的宏来实现，编程序。
输入格式
a b两个数
输出格式
a/b的余数
样例输入
3 2
样例输出
1*/
//思考a，b两个数，宏相除
#define Division(a,b) （（a） % （b））
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int result = Division(a,b);

    printf("%d\n",result);
    return 0;
}