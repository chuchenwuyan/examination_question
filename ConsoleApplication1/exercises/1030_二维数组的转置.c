#include <stdio.h>

void transpose(int arr[3][3]);


int main()
{
	//3 * 3Êı×é
	int matrix[3][3] = { 0 };

	//¼üÅÌÂ¼Èë
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	transpose(matrix);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
void transpose(int arr[3][3])
{
	int temp;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	
}