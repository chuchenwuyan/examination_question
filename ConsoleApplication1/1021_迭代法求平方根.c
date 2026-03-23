//做题前的感觉，也是那种前后项关系的题
#include <stdio.h>
#include <math.h>

int main()
{
	double a;
	while (scanf("%lf", &a) != EOF)
	{
		double X_old = a;
		double X_new = (X_old + a / X_old) / 2.0;
		while (fabs(X_new - X_old) >= 0.00001)	//所以想尝试while循环的中止条件是两根之差大于0.00001
		{
			X_old = X_new;
			X_new = (X_old + a / X_old) / 2.0;
		}
		printf("%.3lf\n", X_new);
	}
	return 0;
}
//本质还是：更新变量
//abs()：专门求** 整数（int）** 的绝对值，需要 #include <stdlib.h>。
//fabs()：专门求 * *小数（double / float） * *的绝对值，需要 #include <math.h>。你这道题是算小数的平方根，所以必须用 fabs。