#include <stdio.h>

typedef struct
{
    char xuehao[100];
    char name[100];
    double Chinese,English,Math;
}Data;

void input(Data *stu);
void print(Data stu);
double Grade(Data stu);

int main()
{
    //准备数据
    int n;
    Data stu[100];

    double Chinese_total = 0;
    double English_total = 0;
    double Math_total = 0;

    scanf("%d",&n);

    for(int i = 0;i < n;i++)
    {
        input(&stu[i]);
        
        //平均值
        Chinese_total += stu[i].Chinese;
        English_total += stu[i].English;
        Math_total += stu[i].Math;
    }

    Data maxStu = stu[0];
    double maxTotal = Grade(stu[0]);

    for (int i = 1; i < n; i++)
    {
        double total = Grade(stu[i]);

        if (total > maxTotal)
        {
            maxTotal = total;
            maxStu = stu[i];
        }
    }

    printf("%g %g %g\n",
        Chinese_total / n,
        English_total / n,
        Math_total / n);

    print(maxStu);

    return 0;
}

void input(Data *stu)
{
    scanf("%s%s%lf%lf%lf",stu->xuehao,stu->name,&stu->Chinese,&stu->English,&stu->Math);
}
void print(Data stu)
{
    printf("%s %s %g %g %g\n",
           stu.xuehao,
           stu.name,
           stu.Chinese,
           stu.English,
           stu.Math);
}
double Grade(Data stu)
{
    return stu.Chinese + stu.English + stu.Math;
}