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
// 结论： 辗转相除法的第一轮会自动把两个数的位置交换过来。所以，你不需要在代码里特意写 if(m < n) 去交换它们，算法自带这个功能。

//最小公倍数的计算顺序