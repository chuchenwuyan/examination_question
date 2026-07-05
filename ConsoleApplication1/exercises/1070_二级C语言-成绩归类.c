// 题目描述

// 编写程序，输入一批学生的成绩，遇0或负数则输入结束，
// 要求统计并输出优秀（大于85）、通过（60～84）和不及格（小于60）的学生人数。

// 输入格式
// 一批学生成绩，遇0结束
// 输出格式
// 输出各个成绩段的人数
// 样例输入
// 88 71 68 70 59 81 91 42 66 77 83 0
// 样例输出
// >=85:2
// 60-84:7
// <60:2

//输入的数量不确定，范围是正负数加0.但是由于此处没有整数除法之类的内容，所以定义为int而非double
//输出大于85    60～84      小于60各自范围的通过人数
//定义int i = 0,三个count（count1,count2,count3）计数和一个足够大的整型数组grade[1000]，while(grade[i] > 0)循环键盘录入，i++
//if判断if(grade[i] >= 85)  count1++
//之后同大于等于85
//打印printf(">=85:%d\n",count1)
//printf("60-84:%d\n",count2)
//printf("<60:%d\n",count3)
#include <stdio.h>

int main()
{
    int grade;
    int excellentCount = 0;
    int passCount = 0;
    int failCount = 0;

    while(1)
    {
        scanf("%d",&grade);

        if(grade <= 0)
        {
            break;
        }
        if(grade >= 85)
    {
        excellentCount++;
    }
    else if(grade >= 60)
    {
        passCount++;
    }
    else
    {
        failCount++;
    }
    }

    printf(">=85:%d\n",excellentCount);
    printf("60-84:%d\n",passCount);
    printf("<60:%d\n",failCount);

    return 0;
}