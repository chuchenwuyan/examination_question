#include <stdio.h>

int main()
{
	int m, n, a, b, t;
	// 1. 输入两个数
	if (scanf("%d %d", &m, &n) != EOF);
	// 2. 备份原始值
	a = m;
	b = n;
	// 3. 辗转相除法 (核心循环)
	while (b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}

	int gcd = a; // 此时 a 存储的就是最大公约数
	// 4. 计算最小公倍数
  // 考试技巧：先除后乘防止数据溢出
	int lcm = (m / gcd) * n;
	
	printf("%d %d\n", gcd, lcm);

	return 0;
}

//陷阱
// 如果 m < n 怎么办？
//最小公倍数的计算顺序
//