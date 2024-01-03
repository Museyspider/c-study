// 判断 101 到 200 之间的素数。

#include <stdio.h>

int main()
{

  for (int i = 101; i < 201; i++)
  {
    int flag = 0;
    for (int j = 2; j < i / 2 + 1; j++)
    {
      if (i % j == 0)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      printf("%d\n", i);
  }
  return 0;
}