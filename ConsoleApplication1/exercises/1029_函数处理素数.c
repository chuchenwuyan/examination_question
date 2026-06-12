#include <stdio.h>

int prime(int N);

int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		int res = prime(N);
		if (res == 0)
		{
			printf("not prime");
		}
		else
		{
			printf("prime");
		}
	}
	return 0;
}
//判断是否是素数的函数
int prime(int N)
{
	if (N <= 1)
	{
		return 0;
	}
	for (int i = 2; i <= N / i; i++)
	{
		if (N % i == 0)
		{
			return 0;
		}
	}
	return 1;
}