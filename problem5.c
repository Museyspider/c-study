// 题目：输入三个整数x,y,z，请把这三个数由小到大输出。

#include <stdio.h>

int main()
{
  int arr[3];
  scanf("%d %d %d", arr, &arr[1], &arr[2]);
  int min = arr[0];
  int max = arr[0];

  for (int i = 0; i < 3; i++)
  {
    if (min > arr[i])
    {
      min = arr[i];
    }
    if (max < arr[i])
    {
      max = arr[i];
    }
  }
  printf("%d\n", min);
  for (int i = 0; i < 3; i++)
  {
    if (arr[i] != min && arr[i] != max)
    {
      printf("%d\n", arr[i]);
    }
  }
  printf("%d\n", max);
}