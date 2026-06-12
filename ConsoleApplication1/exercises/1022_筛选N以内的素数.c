#include <stdio.h>

int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		int arr[10005] = { 0 };
		for (int i = 2; i <= N; i++)
		{
			if (arr[i] == 0)
			{
				for (int j = i * 2; j <= N; j = j + i)
				{
					arr[j] = 1;
				}
			}
		}
		for (int i = 2; i <= N; i++)
		{
			if (arr[i] == 0)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}