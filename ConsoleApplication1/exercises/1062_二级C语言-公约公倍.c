// 题目描述
// 输入两个正整数m和n，求其最大公约数和最小公倍数。

// 输入格式
// 无
// 输出格式
// 无
// 样例输入
// 2 3
// 样例输出
// 1
// 6
#include <stdio.h>

int main()
{
    int firstNumber, secondNumber;
    int originalFirstNumber, originalSecondNumber;
    int remainder;
    int greatestCommonDivisor;
    int leastCommonMultiple;

    scanf("%d%d", &firstNumber, &secondNumber);

    // 保存原始数据，因为辗转相除法会修改 firstNumber 和 secondNumber
    originalFirstNumber = firstNumber;
    originalSecondNumber = secondNumber;

    // 辗转相除法求最大公约数
    while(secondNumber != 0)
    {
        remainder = firstNumber % secondNumber;
        firstNumber = secondNumber;
        secondNumber = remainder;
    }

    greatestCommonDivisor = firstNumber;

    // 最小公倍数 = 两数之积 / 最大公约数
    leastCommonMultiple =
        originalFirstNumber / greatestCommonDivisor * originalSecondNumber;

    printf("%d\n%d\n",
           greatestCommonDivisor,
           leastCommonMultiple);

    return 0;
}