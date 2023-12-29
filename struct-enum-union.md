[TOC]
# struct-enum-union

## struct
1. 结构体内存示意图
![Alt text](%E7%BB%93%E6%9E%84%E4%BD%93%E7%9A%84%E5%86%85%E5%AD%98%E7%A4%BA%E6%84%8F%E5%9B%BE.jpg)
> 结构体的内存分配 要大于大于 各成员内存总和

2. 基本语法
````c
struct node 
{
  int val;
  struct node *next;  
  char arr[];
} node1；  // node1是一个变量; struct node是定义的一个类型

typedef struct node
{
  int val;
  char arr[];
  struct node *next;
}Node;  // 这里的Node是定义的类型 等价于struct node
````
2. 注意事项
   1. 初始化和数组一样 可以用={, , ,};赋值  其它情况不可使用={, , ,};赋值; c99支持 node1 = (struct node){, , ,};赋值 也就是临时创建了一个结构体变量，用下面2的方式赋值
   2. 两个相同类型的结构体变量可以直接进行赋值操作，可以方便数组的copy
   3. 若结构体类型包含数组成员，函数传参一般用结构体指针，传结构体，开销会很大，要将所有参数压入栈中
3. 使用场景

## union
1. 与struct的异同点
2. 使用union的场景

## enum
