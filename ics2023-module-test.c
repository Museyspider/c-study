/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

// #include "sdb.h"
#include <stdio.h>
#include <assert.h>

#define NR_WP 32

typedef struct watchpoint
{
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

WP *new_wp();
void free_wp(WP *wp);

// 本文件的一个全局变量 , 每次使用该变量,是在上一次使用的基础上进行的
static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool()
{
  // 一共有NR_WP个watchpoint, head指向在使用的wp, free指向未使用的wp
  int i;
  for (i = 0; i < NR_WP; i++)
  {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

// 其中new_wp()从free_链表中返回一个空闲的监视点结构
WP *new_wp()
{
  if (free_ == NULL)
  {
    assert(0); // wp_pool用完了
  }

  // 从free_链中删除
  WP *cur = free_;
  free_ = free_->next;

  // 添加到head链中  插入到链表的头
  cur->next = head;
  head = cur;

  return cur;
}

// free_wp()将wp归还到free_链表中
void free_wp(WP *wp)
{
  WP *cur = head;
  if (cur == wp)
  {
    head = head->next;
  }
  else
  {
    while (cur->next != wp || cur->next != NULL)
    {
      cur = cur->next;
    }
    if (cur->next == wp)
    {
      cur->next = cur->next->next;
    }
    if (cur->next == NULL)
    {
      assert(0); // wp不属于wppool中
    }
  }
  wp->next = free_;
  free_ = wp;
}

int main()
{
  init_wp_pool();
  WP *cur = new_wp();
  cur = new_wp();
  cur = new_wp();
  cur = new_wp();
  cur = new_wp();
  cur = new_wp();
  cur = new_wp();
  cur = new_wp();
  cur = new_wp();
  free_wp(cur);
  WP *head1 = head, *free1 = free_;
  while (head1 != NULL)
  {
    printf("%d\n", head1->NO);
    head1 = head1->next;
  }
  printf("-------------------------\n");
  while (free1 != NULL)
  {
    printf("%d\n", free1->NO);
    free1 = free1->next;
  }
  return 0;
}