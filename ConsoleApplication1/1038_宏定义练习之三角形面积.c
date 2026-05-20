#include <stdio.h>
#include <math.h>

#define GET_S(a,b,c) (((a) + (b) + (c)) / 2.0)
#define Area(s,a,b,c) sqrt((s)*((s)-(a))*((s)-(b))*((s)-(c)))

int main()
{
  double a,b,c;
  scanf("%lf%lf%lf",&a,&b,&c);
  double s = GET_S(a,b,c);

  double area = Area(s,a,b,c);

  printf("%.3lf",area);
    return 0;
}
/*三角形面积=SQRT(S*(S-a)*(S-b)*(S-c))
 其中S=(a+b+c)/2，a、b、c为三角形的三边。
  定义两个带参的宏，一个用来求area， 
  另一个宏用来求S。 写程序，在程序中用带实参的宏名来求面积area。
输入格式
a b c三角形的三条边,可以是小数。'
输出格式
三角形面积，保留3位小数
样例输入
3 4 5
样例输出
6.000*/