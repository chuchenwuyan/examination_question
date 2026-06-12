#include <stdio.h>

int main()
{
	int  N;
	while (scanf("%d", &N) != EOF)
	{
		double sum = 0.0;
		double numerator = 2.0;   // 分子，初始为 2
		double denominator = 1.0; // 分母，初始为 1
		for (int i = 1;i <= N;i++)
		{
			sum = sum + (numerator / denominator);
			double temp = numerator;
			numerator = numerator + denominator;
			denominator = temp;

		}
		printf("%.2f\n",sum);
	}
	return 0;
}