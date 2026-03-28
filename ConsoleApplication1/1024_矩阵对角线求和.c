#include <stdio.h>

int main()
{
	//3 * 3矩阵
	int matrix[3][3] = { 0 };
	int sum1 = 0;	//主对角线和
	int sum2 = 0;	//副对角线和

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		sum1 += matrix[i][i];
		sum2 += matrix[i][2 - i];
	}
	printf("%d %d\n", sum1, sum2);

	return 0;
}
//不管是普通变量 int sum = 0; 还是数组 int arr[100] = { 0 };必须第一时间赋初值