#include <stdio.h>

int get_gcd(int a, int b);
int get_lcm(int a, int b);

int main()
{
	int m = 0, n = 0;
	while (scanf("%d %d", &m, &n) != EOF)
	{
		int result_gcd = get_gcd(m, n);
		int result_lcm = get_lcm(m, n);

		printf("%d %d\n", result_gcd, result_lcm);
	}
	return 0;
}
int get_gcd(int a, int b)
{
	int t;
	while (b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	int gcd = a;	//计算与输入输出应该分离
	return gcd;
}
int get_lcm(int a, int b)
{
	int gcd_val = get_gcd(a, b);
	int lcm_val = (a / gcd_val) * b;

	return lcm_val;
}
//辗转相除法是专升本考试中唯一指定求最大公约数的算法。