#include <stdio.h>

typedef struct
{
    char xuehao[100];
    char name[100];
    double Chinese,English,Math;
}Data;

void input(Data *stu);
void print(Data stu);

int main()
{
    int n;
    Data stu[100];

    scanf("%d",&n);

    for(int i = 0;i < n;i++)
    {
        input(&stu[i]);
    }
    for(int i = 0;i < n;i++)
    {
        print(stu[i]);
    }

    return 0;
}

void input(Data *stu)
{
    scanf("%s%s%lf%lf%lf",stu->xuehao,stu->name,&stu->Chinese,&stu->English,&stu->Math);
}
void print(Data stu)
{
    printf("%s,%s,%g,%g,%g\n",stu.xuehao,
           stu.name,
           stu.Chinese,
           stu.English,
           stu.Math);
}
