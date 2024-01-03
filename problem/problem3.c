// 题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

// 可以通过一些数学性质去提升算法的时间复杂度
#include <stdio.h>

int main()
{
  for (int i = 1; i <= 10000; i++)
  {
    for (int j = 1; j < 100; j++)
    {
      if (j * j == i + 100)
      {
        for (int j = 1; j < 100; j++)
        {
          if (j * j == i + 268)
          {
            printf("i = %d\n", i);
          }
        }
      }
    }
  }

  return 0;
}