#include <stdio.h>

void move(int arr[], int n, int m);

int main()
{
    //准备数据
    int arr[100];
    int n,m;

   scanf("%d",&n);
   for(int i = 0;i < n;i++)
   {
    scanf("%d",&arr[i]);
   }
   scanf("%d",&m);

   move(arr, n, m);

   for (int i = 0; i < n; i++)
   {
       printf("%d ", arr[i]);
   }

    return 0;
}

void move(int arr[], int n, int m)
{
    int result[100];

    //写一个循环，把原数组中的数据放入新数组中
    //比如n是10，m是2 。那么就要把0上的数放到2上那么就是arr[i] = result[i + m]

   for (int i = 0; i < n - m; i++)
    {
    result[i + m] = arr[i];
    }
    for(int i = 0;i < m;i++)
    {
        result[i] = arr[n - m + i];
    }
    for (int i = 0; i < n; i++)
    {
    arr[i] = result[i];
    }
}