//求Sn = a + aa + aaa + … + aa…aaa（有n个a）之值，其中a是一个数字，为2。
// 例如，n = 5时 = 2 + 22 + 222 + 2222 + 22222，n由键盘输入。
#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		long long S = 0;		//使用longlong格式是因为当n的数量多了起来后可能会超出int的范围
		long long num = 0;
		//循环
		for(int i = 1; i <= n;i++)
		{
			S = S * 10 + 2;		//生成具体的项：上一项乘10再加上2
			num = num + S;		//我的想法是上一个S被赋值到一个新的变量，在下个循环中上一个S加新的S
		}
		printf("%lld\n",num);
	}
	return 0;
}
//局部变量（写在函数内部的）：不赋初值就是垃圾值（随机数）。
//全局变量（写在所有函数外面的）或 静态变量（前面加了 static 的）：如果不赋初值，C语言会自动帮它们赋值为 0。