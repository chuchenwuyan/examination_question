#include <stdio.h>

int main()
{
    int n;
    long long S = 1;
    long long total = 0;

    scanf("%d",&n);

    for(int i = 1;i <= n;i++)
    {
        
        S *= i;
        total += S;
    }
    printf("%lld\n",total);

    return 0;
}