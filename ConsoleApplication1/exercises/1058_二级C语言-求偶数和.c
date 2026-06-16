// 题目描述
// 编制程序，输入n个整数（n从键盘输入，n>0），输出它们的偶数和。

// 输入格式
// 无
// 输出格式
// 无
// 样例输入
// 2
// 1 2
// 样例输出
// 2
// 思考：
// 输入n
// 输出偶数和
// 就需要判断从1到n谁是偶数，判断条件就是n % 2 == 0
// 然后累加就是total += oushu
#include <stdio.h>

int main()
{
    int n;
    int num;
    int total = 0;

    scanf("%d",&n);

    for(int i = 1;i <= n;i++)
    {
        scanf("%d",&num);
        if(num % 2 == 0)
        {
            total += num;
        }
    }

    printf("%d\n",total);

    return 0;
}