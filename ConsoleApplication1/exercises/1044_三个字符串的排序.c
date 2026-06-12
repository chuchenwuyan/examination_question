//需要三个字符串，循环键盘录入三个字符串，然后排序
//每个字符串按照从小到大排序    这个从小到大排序是怎么排的？字符串怎么比大小
#include <stdio.h>
#include <string.h>

int main()
{
    //准备数据
    char str[3][100];
    char temp[100];
    for(int i = 0;i <= 2;i++)
    {
        scanf("%s",str[i]);
    }

    //比较大小
    if(strcmp(str[0],str[1]) > 0)
    {
        strcpy(temp,str[0]);
        strcpy(str[0],str[1]);
        strcpy(str[1],temp);
    }
    if(strcmp(str[0],str[2]) > 0)
    {
        strcpy(temp,str[0]);
        strcpy(str[0],str[2]);
        strcpy(str[2],temp);
    }
    if(strcmp(str[1],str[2]) > 0)
    {
        strcpy(temp,str[1]);
        strcpy(str[1],str[2]);
        strcpy(str[2],temp);
    }
    printf("%s\n",str[0]);
    printf("%s\n",str[1]);
    printf("%s\n",str[2]);

    return 0;
}