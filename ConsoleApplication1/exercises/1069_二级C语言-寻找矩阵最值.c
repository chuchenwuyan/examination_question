// 题目描述
// 输入一个正整数n (1≤ n ≤6),再输入一个n 行n列的矩阵，找出该矩阵中绝对值最大的元素以及它的行下标和列下标。

// 输入格式
// n

// nxn

// 输出格式
// 数 行 列

// 样例输入
// 2
// 1 2
// 3 4
// 样例输出
// 4 2 2

//输入正整数n和n行n列的矩阵
//输出绝对值最大的数，他的行下标，列下标
//定义变量int n matrix[6][6]
//键盘录入n
//for循环for(int i = 1;i <= n;i++)
//嵌套循环for(int j = 1;j <= n;j++)
//键盘录入矩阵scanf("%d%d",&matrix[i][j])
//让0，0当做目前的最大值，然后逐个从0，1 1，1类似这样比较
//打印当前的下标
// 输入范围：1 <= n <= 6
// 矩阵实际使用的下标是0到n-1
// 输出的行号和列号从1开始，所以输出时下标加1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int matrix[6][6];
    int maxrow = 0,maxcol = 0;

    scanf("%d",&n);

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            scanf("%d",&matrix[i][j]);
            
            if(abs(matrix[i][j]) > abs(matrix[maxrow][maxcol]))
        {
            maxrow = i;
            maxcol = j;
        }
        }
    }

    printf("%d %d %d\n",matrix[maxrow][maxcol],maxrow + 1,maxcol + 1);

    return 0;
}