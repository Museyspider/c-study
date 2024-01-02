#include <stdio.h>

struct node
{
  int val;
  struct node *next;
  enum {a=100, b, c=110, };
  struct div
  {
    double d;
    long long l;
  };
  union unian
  {
    int first;
    double second;
  };
} node1;

enum
{
  yi = 1,
  er,
  san,
  si,
  wu,
} month;
int main()
{
  node1.val = 1;
  printf("%d\n", er);
  printf("%d\n", month);

  return 0;
}