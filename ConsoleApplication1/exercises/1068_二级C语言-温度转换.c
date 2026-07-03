// 输出一张摄氏一华氏温度转换表，摄氏温度的取值区间是[-100oC，150oC ]，
// 温度间隔5oC。要求定义和调用函数 ctof(c),将摄氏温度C转换成华氏温度F，计算公式：
// F = 32 + C* 9/5。
//  例如
// c=0->f=32
// c=5->f=41
// c=10->f=50
// c=15->f=59
// c=20->f=68
// c=25->f=77
// c=30->f=86
// c=35->f=95
// c=40->f=104
// c=45->f=113
// c=50->f=122
// c=55->f=131
// c=60->f=140
// c=65->f=149

//没有输入
//输出的是一串字符串，字符串的形式需要类似c=0->f=32。
//边界需要取-100到150
//先定义函数，void ctof(int c)
//函数内定义int f
//公式是F = 32 + C* 9/5。
//然后在main函数里循环， for(int i = -100;i <= 150;i+5)
//循环里把i传入ctof，用result接收
//打印printf("c=%d->f=%d\n",i,result);
#include <stdio.h>

int ctof(int c)
{
    int f;
    
    f = 32 + c * 9/5;
    
    return f;
}
int main()
{
    int result;
    for(int i = -100;i <= 150;i = i + 5)
    {
        result = ctof(i);
        printf("c=%d->f=%d\n",i,result);
    }
    
    return 0;
}