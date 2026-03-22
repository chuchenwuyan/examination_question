#include <stdio.h>

int main()
{
	int N;
	int peach = 1;
	while (scanf("%d", &N) != EOF)
	{
		for (int i = 1; i < N; i++)
		{
			peach = (peach + 1) * 2;
		}
		printf("%d\n", peach);
	}
		return 0;
}
//新状态 = 老状态 经过某种数学运算