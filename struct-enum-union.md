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
  char arr[];  // 与其它类型的嵌套使用
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
} node1；  // node1是一个变量; struct node是定义的一个类型

typedef struct node
{
  int val;
  char arr[];
  struct node *next;
}Node;  // 这里的Node是定义的类型 等价于struct node

访问成员用 . ->
````
2. 注意事项
   1. 初始化和数组一样 可以用={, , ,};赋值  其它情况不可使用={, , ,};赋值; c99支持 node1 = (struct node){, , ,};赋值 也就是临时创建了一个结构体变量，用下面2的方式赋值
   2. 两个相同类型的结构体变量可以直接进行赋值操作，可以方便数组的copy
   3. 若结构体类型包含数组成员，函数传参一般用结构r体指针，传结构体，开销会很大，要将所有参数压入栈中
3. 使用场景

## union
1. 与struct的异同点
   ![Alt text](union%E4%B8%8Estruct%E7%9A%84%E5%8C%BA%E5%88%AB.jpg)
  
2. 使用union的场景

## enum
1. 使用场景:避免程序中出现过多的数字,影响程序的阅读,月份可以用enum { yiyue=1, er, ..., }month; 此处的month是变量,其取值只能是前面列举的值,可以用month,也可以直接用{}中的常量
2. 其存储区域应该和变量一样 我的猜测

## 结构体和指针
形成链式结构