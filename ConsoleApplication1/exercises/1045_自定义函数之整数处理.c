#include <stdio.h>

void input(int arr[], int n);
void process(int arr[], int n);
void output(int arr[], int n);

int main()
{
    int arr[10];
    int n = 10;
    //调用
    input(arr,n);
    process(arr,n);
    output(arr,n);

    return 0;
}
//function

void input(int arr[], int n)
{
    for(int i = 0;i < 10;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void process(int arr[], int n)
{
    int minIndex = 0;
    int maxIndex = 0;
    int temp;

    for(int i = 1;i < n;i++)
    {
        if(arr[i] < arr[minIndex])
        {
            minIndex = i;;
        }
        if(arr[i] > arr[maxIndex])
        {
            maxIndex = i;;
        }
    }
    //exchange
    temp = arr[minIndex];
    arr[minIndex] = arr[0];
    arr[0] = temp;

    if(maxIndex == 0)   //不懂
    {
        maxIndex = minIndex;
    }
    temp = arr[maxIndex];
    arr[maxIndex] = arr[n - 1];
    arr[n - 1] = temp;
}

void output(int arr[], int n)
{
    for(int i = 0;i < n;i++)
    {
        printf("%d ",arr[i]);
    }
}
// 如果最大值原来位于 arr[0]，
// 将最小值换到首位后，最大值会被换到原 minIndex 位置，
// 因此需要将 maxIndex 更新为 minIndex。