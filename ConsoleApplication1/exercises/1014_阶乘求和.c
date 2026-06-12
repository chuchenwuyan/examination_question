#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d",&n) != EOF)
	{
		long long S = 0;
		long long fact = 1;    // fact 用来存放"当前这一项的阶乘"。注意：乘法的初始值必须是1，不能是0！
		if (n > 20 || n <= 0)
		{
			continue;		//此处应填写一直接跳到末尾的关键字
		}
		else
		{
			for (int i = 1; i <= n; i++)
			{
				fact = fact * i;
				S = S + fact;
			}
			printf("%lld\n",S);
		}
	}
	return 0;
}