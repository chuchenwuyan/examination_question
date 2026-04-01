#include <stdio.h>

int main()
{
	int arr[10];
	while (scanf("%d", &arr[0]) != EOF)
	{
		for (int i = 1; i <= 9; i++)
		{
			scanf("%d",&arr[i]);
		}

		//倒序
		for (int i = 9; i >= 0; i--)
		{
			printf("%d ",arr[i]);	//%d后加了空格
		}
	}
	return 0;
}

//输入十个数字	不需要计算	想到直接键盘录入十个数字需要创建十个变量，于是创建数组
//for循环 i = 9，i--

//注意点：1~空格分开 2~忘了把 int arr[10]; 初始化为 int arr[10] = {0}