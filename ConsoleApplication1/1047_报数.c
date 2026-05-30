#include <stdio.h>

int main()
{
    //准备数据
    int n;
    int count = 0;
    int i = 0;
    int alive[1000];

    //输入
    scanf("%d",&n);
    int left = n;
    for(int i = 0;i < n;i++)
    {
        alive[i] = 1;
    }
    while(left > 1)     //只要剩余人数大于1就一直循环
    {
        if(alive[i] == 1)   //是活人
        {
            count++;        //报数加一
            if(count == 3)      //如果报数是3
        {
            alive[i] = 0;       //这个位置的人判定不存活
            left--;     //剩余人数减一
            count = 0;      //报数重置
        }
        }
        i = (i + 1) % n;    //转圈
    }
    
    for(int i = 0;i < n;i++)
    {
        if(alive[i] == 1)
        {
            printf("%d",i + 1);
        }
    }
}