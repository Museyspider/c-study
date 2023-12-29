[TOC]
# I/Ostream

## 文件类型
1. 文本文件(ASCII字符组成)
2. 二进制文件(0/1组成)

## 标准输入流/标准输出流
1. 标准输入流: 指从键盘中读入数据
2. 标准输出流: 指将数据输出到屏幕
3. stderr   : 错误输出流 也是输出到屏幕中
> ==常见用法: 将一个程序/文件的标准输入/输出通过>或< 或 | 重定向输入/输出到另一个程序或文件中==

## 重点介绍文本文件的读写
1. 首先通过FILE *fp = fopen("文件位置", "打开模式")获取该文件的指针,文件打开失败指针则指向NULL
2. 读写文件中的内容
   1. 每次读写单个字符 使用**fgetc(c, fp) fputc(c, fp1)** ;  当c==EOF是表示文件读完了  *fp1是写入文件的指针*
   2. 每次读写一行字符串 使用**fgets(buffer, BUFFER_SIZE, fp)  fputs(buffer, BUFFER_SIZE, fp1)**
   3. 格式化读写一行字符串 使用 **fscanf(buffer, "%d %d %d", &x, &y, &z)  fprintf(fp1, "%d-%d-%d", x, y, z)**
3. 关闭文件 fclose(fp)
> 打开模式: r(读文件) , w(文件覆盖写) , a(文件追加写)

## 具体代码实例
````c
#include <stdio.h>
#define BUFFER_SIZE 1024

struct Score
{
  int score1;
  int score2;
  int score3;
};

int main()
{
  FILE *fp1 = fopen("./problem1.c", "r");
  FILE *fp2 = fopen("./dataout.txt", "w");
  // char c;
  char buffer[BUFFER_SIZE];
  struct Score a;
  if (fp1 && fp2)
  {
    // 将文件中的内容 按字符来读写   按字符读时 中文是读不出来的 为什么
    // while ((c = fgetc(fp1)) != EOF)
    // {
    //   printf("%c ", c);
    //   fputc(c, fp2);
    // }

    // 按行读文件  将一行数据读入buffer中  按字符串读时 中文是读的出来的
    // while (fgets(buffer, BUFFER_SIZE, fp1))
    // {
    //   printf("--%s\n", buffer);
    //   fputs(buffer, fp2);
    // }

    // 格式化读写
    while (fgets(buffer, BUFFER_SIZE, fp1) != NULL)
    {
      if (sscanf(buffer, "%d %d %d", &a.score1, &a.score2, &a.score3) == 3) // 有几个输入 这里判断就是几
      {
        fprintf(fp2, "%d-%d-%d", a.score1, a.score2, a.score3);
      }
    }

    // 关闭文件
    fclose(fp1); 
    fclose(fp2);
  }
  else
  {
    // fp 为空时打开失败
  }
}
````