#include <stdio.h>

int main()
{
	int a, b, c;
	while (scanf("%d%d%d", &a, &b, &c) != EOF)
	{
		double res1 = 0;
		double res2 = 0;
		double res3 = 0;
		for (int i = 1; i <= a; i++)
		{
			res1 = res1 + i;		//a = 5	res1 = 0+1	res1 = 1+2	res1 = 3+3 res1 = 6+4 res1 = 10+5	1+2+3+4+5
		}
		for (int i = 1; i <= b; i++)
		{
			res2 = res2 + (i * i);
		}
		for (int i = 1; i <= c; i++)
		{
			res3 = res3 + (1.0 / i);
		}
			double total = res1 + res2 + res3;
			printf("%.2f\n", total);
		
	}
	return 0;
}