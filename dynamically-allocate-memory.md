[TOC]

# 动态分配内存

## 使用malloc() free()
malloc(sizeof(类型) * 多少个)  
malloc() 返回的是void * 可以将其转换为任意类型的指针
***使用malloc()函数时一定要小心,malloc()返回的是连续的一段内存空间,通过malloc()返回的指针可以访问到分配内存空间之外的内存,也可以修改该内存值,所以会引发一些不可控的问题***
````c
// * 比 . ->的优先级都要小
// malloc() 是从堆中分配一块连续的内存空间
// 指针类型是指 将连续多少的内存地址 解释成一条数据
#include <stdio.h>
#include <stdlib.h>
long long *p = (long long *)malloc(sizeof(long long) * len);
                        // *p 指long long  
char *c = (char *)malloc(sizeof(*p) * len);
````

free() 一定要是malloc()分配的内存,同时要让指向malloc()分配内存地址的指针 置NULL , 防止以后解引用时发生未知的错误
````c
int *p = (int *)malloc(sizeof(int) * len);
free(p);
p = NULL;
````