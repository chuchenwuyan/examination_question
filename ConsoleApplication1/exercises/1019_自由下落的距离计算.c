//一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。
// 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
#include <stdio.h>

int main()
{
	int M, N;
	while (scanf("%d%d", &M, &N) != EOF)
	{
		double high = M;
		double sum = 0;
		//第一次反弹高度M / 2
		//第二次M / 4
		for (int i = 1; i <= N; i++)	//所以第i次的高度是M/2的i次方
		{
			if (i == 1)
			{
				sum = sum + high;
			}
			else
			{
				sum = sum + high * 2;
			}
			high = high / 2.0;
		}
		printf("%.2f %.2f\n",high,sum);
	}
	return 0;
}