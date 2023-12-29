// 题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。

#include <stdio.h>

int main()
{
  int g;
  int s;
  int b;
  for (int i = 100; i < 1000; i++)
  {
    g = i % 10;
    s = i % 100 / 10;
    b = i / 100;
    if (g * g * g + s * s * s + b * b * b == i)
      printf("%d\n", i);
  }
  return 0;
}