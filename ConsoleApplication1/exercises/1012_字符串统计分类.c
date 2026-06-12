//输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
#include <stdio.h>

int main()
{
	char str[201];
	int letters = 0, numbers = 0,spaces = 0, others = 0;
	//录入
	if (scanf("%[^\n]", str) != EOF)
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			char c = str[i];
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				letters++;
			}
			else if (c >= '0' && c <= '9')
			{
				numbers++;
			}
			else if (c == ' ')
			{
				spaces++;
			}
			else
			{
				others++;
			}
		}
		printf("%d %d %d %d\n", letters, numbers, spaces, others);
	}
	return 0;
}
//分类逻辑：利用 ASCII 连续性，通过区间判断（如 '0' 到 '9'）实现分类计数。
//%[^\n] = “只要【不是回车】，你就给我一直读下去，直到撞到回车为止。”
//C 字符串：底层是 char 数组，末尾必带 \0。