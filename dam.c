#include <stdio.h>
#include <stdlib.h>

int main()
{

  int *p = (int *)malloc(sizeof(int) * 10);
  char *c = (char *)malloc(sizeof(*p) * 10);

  printf("p = %p\n", p);
  printf("p+1 = %p\n", p + 1);
  printf("c = %p\n", c);
  printf("c+1 = %p\n", c + 1);
  for (int i = 0; i < 255; i++)
  {
    *(c + i) = i;
  }
  printf("%d\n", *(c + 253));
  printf("%p\n", c + 253);
  int *ptr = p + 666;
  *ptr = 5;
  printf("*ptr = %d\n", *ptr);

  int t = 100;
  printf("%p\n", &t);
  int *ptr1 = &t;
  *(ptr1 + 1000) = 1000;
  printf("%d\n", *(ptr1 + 1000));

  return 0;
}