//给出一个不多于5位的整数，
//要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321, 应输出123
#include <stdio.h>

int main()
{
	int num;
	while (scanf("%d",&num) !=EOF)
	{
		if (num == 0)		//特殊情况num = 0
		{
			printf("1\n0\n0\n");
			continue;
		}
		int temp = num;
		int digits[6];
		int count = 0;

		//剥洋葱法
		while (temp > 0)
		{
			digits[count] = temp % 10;	//digits[0] = 123 % 10 = 3	digits[1] = 12 % 10 = 	digits[2] = 1 % 10 = 1	
			temp = temp / 10;	//temp = 123 / 10 = 12	temp = 12 / 10 = 1	temp = 1 / 10 = 0
			count++; //count = 1	count = 2	count = 3
		}
		printf("%d\n", count);
		for (int i = count - 1; i >= 0; i--) {
			printf("%d", digits[i]);
			if (i > 0) printf(" "); // 最后一个数字后面不加空格
		}
		printf("\n");

		// 3. 逆序输出（直接顺着遍历数组即可）
		for (int i = 0; i < count; i++) {
			printf("%d", digits[i]);
		}
		printf("\n");
	}
	return 0;
}
//在 scanf 的双引号里加上 \n 是一个大忌。


//比如你要钉 5 段围栏，需要 6 根柱子。
//比如你要打印 5 个数字，中间只需要 4 个空格。
//如果题目要求“最后没有多余空格”，脑子里就要立刻跳出这个 if 判断。
//for (int i = count - 1; i >= 0; i--) {
//	printf("%d", digits[i]);
//	if (i > 0) printf(" "); // 最后一个数字后面不加空格
//}