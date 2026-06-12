#include <stdio.h>

int main()
{
	//Array
	int arr[11];
	int num;
	while (scanf("%d", &arr[0]) != EOF)
	{
		for (int i = 1; i <= 8; i++)
		{
			scanf("%d",&arr[i]);
		}
		scanf("%d",&num);

		//compare
		int i;
		for (i = 8; i >= 0; i--)
		{
			if (arr[i] > num)
			{
				arr[i + 1] = arr[i];
			}
			else
			{
				break;
			}

		}
		arr[i + 1] = num;

		//print
		for (i = 0; i <= 9; i++)
		{
			printf("%d\n", arr[i]);
		}
	}
	return 0;
}