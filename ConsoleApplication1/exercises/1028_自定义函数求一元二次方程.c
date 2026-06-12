#include <stdio.h>
#include <math.h>

struct RootResult
{
	double val1;
	double val2;
};
struct ComplexRoot
{
	double real;
	double imag;
};
//先全局来一个struct RootReesult里面包括val1，val2.这样全局都能用两个根

struct RootResult calc_greater_than_zero(double a, double b, double delta)
{
	struct RootResult res;
	double num = sqrt(delta);
	res.val1 = (-b + num) / (2 * a);
	res.val2 = (-b - num) / (2 * a);
	return res;
}

struct RootResult calc_equal_zero(double a, double b)
{
	struct RootResult res;
	res.val1 = (-b ) / (2 * a);
	res.val2 = res.val1;
	return res;
}

struct ComplexRoot calc_less_than_zero(double a, double b, double delta)
{
	struct ComplexRoot res;
	res.real = -b / (2 * a);
	if (fabs(res.real) <= 1e-6)
	{
		res.real = 0.0;
	}
	res.imag = sqrt(-delta) / fabs(2 * a);
	return res;
}

int main()
{
	double a, b, c;
	while (scanf("%lf %lf %lf",&a,&b,&c) != EOF)
	{
		////防御
		if (a == 0)
		{
			printf("Not a quadratic equation.\n");
			continue;
		}
		
		double delta = b * b - 4 * a * c;

		//判断
		if (delta > 0)
		{
			struct RootResult res_val = calc_greater_than_zero(a, b, delta);
			printf("%.3f %.3f\n", res_val.val1, res_val.val2);
		}
		else if(fabs(delta) <= 1e-6)
		{
			struct RootResult res_val = calc_equal_zero(a, b);
			printf("%.3f %.3f\n", res_val.val1, res_val.val2);
		}
		else
		{
			struct ComplexRoot res_val = calc_less_than_zero(a, b, delta);
			printf("x1=%.3lf+%.3lfi ", res_val.real, res_val.imag);
			printf("x2=%.3lf-%.3lfi\n", res_val.real, res_val.imag);
		}
	}
	return 0;
}
//double 的正确输出格式控制符是 %f（保留三位小数应写为 %.3f）
//浮点数直接判等（Bad Smell）：试图用 delta == 0 或 delta < 0 判断。
// 在实际计算机中，经过四则运算的浮点数往往带有极小的误差（如 0.000000000000001）。

//	被忽视的数学定义域（UB风险）：直接使用 sqrt(-delta) 或在分母中使用 2 * a 时，
// 没有严格评估 a 的正负号对最终输出格式的影响，险些触发 NaN（非数字）的未定义行为。

//	幽灵般的负零（ - 0.0 陷阱）：在 OJ 系统中，由于测试数据非常刁钻，
// 计算出的实部可能是一个极小的负数（如 - 1e-8），格式化输出 % .3f 时会被截断为 - 0.000，导致 WA（Wrong Answer）。

//	作用域错乱：在局部代码块（如 if 分支内）定义了变量，却试图在外部访问，或者发生了变量覆盖（Shadowing）。