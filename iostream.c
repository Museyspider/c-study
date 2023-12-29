// "r" "w" "wx" "w+x" "a" "r+" "w+" "a+" 文本格式打开文件的模式

// 文件分为 文本格式(ASCII) 和 二进制格式

// 文件流的基本操作
// FILE *fp = fopen("file", "r");
// if (fp)
// {
//   fclose(fp); // 关闭文件
// }
// else
// {
//   // fp 为空时打开失败
// }

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

    fclose(fp1); // 关闭文件
    fclose(fp2);
  }
  else
  {
    // fp 为空时打开失败
  }
}