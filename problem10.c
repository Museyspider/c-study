// 题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）

#include <stdio.h>

int main()
{
  int pre1 = 1;
  int pre2 = 1;
  int cur;
  for (int i = 3; i < 41; i++)
  {
    printf("%d\n", pre1 + pre2);
    cur = pre2;
    pre2 += pre1;
    pre1 = cur;
  }

  return 0;
}