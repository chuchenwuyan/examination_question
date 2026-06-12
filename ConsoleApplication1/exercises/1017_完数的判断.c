#include <stdio.h>

int main()
{
	int N;
	while (scanf("%d",&N) != EOF)
	{
		for (int current_num = 2; current_num <= N; current_num++)
		{
			int sum = 0;
			for (int i = 1; i < current_num; i++)
			{
				if (current_num % i == 0)
				{
					sum = sum + i;
				}
			}
			//if循环把所有的因子累加到sum中
			//判断所有因子（不包括本身）之和是否等于本身
			if (sum == current_num)
			{
				printf("%d its factors are ", current_num);
				for (int i = 1; i < current_num; i++)
				{
					if (current_num % i == 0)
					{
						printf("%d ", i);
					}
				}
				printf("\n");
			}
		}
	}
	return 0;
}