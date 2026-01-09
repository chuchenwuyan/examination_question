#include <stdio.h>

double temperature(double F);

int main()
{
	double F, C;
	if (scanf("%lf",&F)!= EOF)
	{
		C = temperature(F);
		printf("c=%.2f\n",C);
		return 0;
	}
}
double temperature(double F)
{
	double result = 5.0 * (F - 32) / 9.0;
	return result;
}

//不直接在函数里 printf
//以后看到除法 /，脑子里立刻亮红灯：“两边有没有浮点数？” 如果都是整数，结果一定会丢失精度