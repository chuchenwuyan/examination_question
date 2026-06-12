#include <stdio.h>

int main()
{
	int a, b, c;
	while(scanf("%d %d %d",&a,&b,&c) != EOF)
	{
		int max = a;
		if (b > max)
		{
			max = b;
		}
		if (c > max)
		{
			max = c;
		}
		printf("%d\n",max);
	}
	return 0;
}
//scanf 的“洁癖”：
//记住这个原则：scanf 的引号里，除了格式控制符（% d），尽量什么都不要写。
//写了什么，用户就得在那一行输入什么，哪怕一个多余的空格都会导致读取失败。