//给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。
//90分以及90分以上为A，80 - 89分为B，70 - 79分为C，60 - 69分为D，60分以下为E。
#include <stdio.h>

int main()
{
	//变量
	int grade;
	while(scanf("%d\n",&grade) != EOF)
	{
		switch (grade / 10)
		{
		case 10:
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		default:
			printf("E\n");
			break;
		}
	}
	return 0;
}
//括号里不能是浮点数：switch(0.5) 是非法的，必须是 int 或 char。
//case 后面必须是常量：不能写 case grade > 90:，只能写 case 9:。
//default 是保命符：无论逻辑多严密，都要养成写 default 的习惯，用来捕获意料之外的输入（比如输入了 - 5 分），这是防御性编程的体现。
