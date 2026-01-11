
//有一个函数
//y = { x      x < 1
//    | 2x - 1   1 <= x < 10
//    { 3x - 11  x >= 10
//
//写一段程序，输入x，输出y
#include <stdio.h>

int main()
{//定义变量
	int x, y;	//突然想到y存在不是整数的情况

	if (scanf("%d", &x) != EOF)	//输入x的值
	{
		if (x < 1)	//开始判断x的值域
		{
			y = x;
		}
		else if (x >= 1 && x < 10)
		{
			y = 2 * x - 1;
		}
		else
		{
			y = 3 * x - 11;
		}
		printf("%d", y);
	}
	return 0;
}