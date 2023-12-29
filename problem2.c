// 题目：企业发放的奖金根据利润提成。
// 利润(I)低于或等于10万元时，奖金可提10%；
// 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
// 20万到40万之间时，高于20万元的部分，可提成5%；
// 40万到60万之间时高于40万元的部分，可提成3%；
// 60万到100万之间时，高于60万元的部分，可提成1.5%；
// 高于100万元时，超过100万元的部分按1%提成。
// 从键盘输入当月利润I，求应发放奖金总数？

#include <stdio.h>

int main()
{
  // 这里有一个int 到 double 的隐式转化  要注意  一个int 加减乘除一个小数
  double I;
  // 输入float类型时 要对应的用 %f   输入double类型时 要对应的用 %lf  如果使用错误 ，会对你输入的数据解析错误 产生错误数据
  scanf("%lf", &I);
  printf("%lf\n", I);
  if (I <= 100000)
  {
    printf("jiang jin = %lf\n", I * 0.1);
  }
  else if (I < 200000)
  {
    printf("jiang jin = %lf\n", 10000 + (I - 100000) * 0.075);
  }
  else if (I >= 200000 && I < 400000)
  {
    printf("jiang jin = %lf\n", 10000 + 7500 + (I - 200000) * 0.05);
  }
  else if (I >= 400000 && I < 600000)
  {
    printf("jiang jin = %lf\n", 10000 + 7500 + 10000 + (I - 400000) * 0.03);
  }
  else if (I >= 600000 && I < 1000000)
  {
    printf("jiang jin = %lf\n", 10000 + 7500 + 10000 + 6000 + (I - 600000) * 0.015);
  }
  else
  {
    printf("jiang jin = %lf\n", 10000 + 7500 + 10000 + 6000 + 6000 + (I - 1000000) * 0.01);
  }
  return 0;
}

//  浮点数和整型数做运算 需要注意的点