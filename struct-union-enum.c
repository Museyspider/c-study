#include <stdio.h>

struct node
{
  int val;
  struct node *next;
  int c;
} node1;

int main()
{
  node1.val = 1;
  node1.c = 2;
  printf("node.c=%d\n", node1.c);
  return 0;
}