#include <stdio.h>

int main()
{
    //准备数组
    char str[1000] = {0};
    scanf("%[^\n]",str);

    //开始转变
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'y')
        {
            str[i]++;
        }
        else if (str[i] == 'z')
        {
            str[i] = 'a';
        }
    }
    
    printf("%s\n",str);
    return 0;
}