//先输入一个结构体，有年月日
//一年的总天数无非就是365和366 。也就是在2月是否多一天的区别上
//那就先判断是否是闰年，是闰年就29天，不是闰年就28天
//但是我如何区分30天的月份和31天的月份？直接在结构体中每一个都写上吗
#include <stdio.h>

typedef struct{
    int year;
    int month;
    int day;
}Calendar;

int main()
{
    //准备数据
    Calendar data;
    int total = 0;
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d%d",&data.year,&data.month,&data.day);

    //判断是否是闰年
    if(data.year % 4 == 0 && data.year % 100 != 0 || data.year % 400 == 0)
    {
        days[2] = 29;
    }
    for(int i = 1;i < data.month;i++)
    {
        total += days[i];
    }
    total += data.day;

    printf("%d",total);
    return 0;
}