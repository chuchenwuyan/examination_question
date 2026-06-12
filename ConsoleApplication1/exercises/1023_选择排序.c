#include <stdio.h>

int main()
{
	int arr[10];
	while (scanf("%d", &arr[0]) != EOF)
	{
		for (int i = 1; i <= 9; i++)
		{
			scanf("%d", &arr[i]);
		}
		//choice
		for (int i = 0; i <= 8; i++)
		{
			int min_index = i;
			for (int j = i + 1; j <= 9; j++)
			{
				if (arr[j] < arr[min_index])
				{
					min_index = j;
				}
			}
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}
		for (int i = 0; i <= 9; i++)
		{
			printf("%d\n", arr[i]);
		}
	}
	return 0;
}