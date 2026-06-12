#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i = 0;

    scanf("%d",&n);
    
    while(n > 0)
    {
        arr[i] = n % 8;
        n = n / 8;
        i++;
    }
    for(int j = i - 1;j >= 0;j--)
    {
        printf("%d",arr[j]);
    }
    return 0;
}