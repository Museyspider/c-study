#include <stdio.h>

struct node
{
  int val;
  struct node *next;
  int c;
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
  node1.c = 2;
  printf("%d\n", er);
  printf("%d\n", month);
  printf("node.c=%d\n", node1.c);
  return 0;
}