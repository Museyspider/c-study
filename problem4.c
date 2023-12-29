// 输入某年某月某日，判断这一tian是这一年的di几tian？

// 一年之中就是2月的tian数是不一样的  ， 先要判断该年是否是闰年
// scanf("%d %d %d")  最后一个%d后面一定不要留空格  否则输入会存在问题
#include <stdio.h>

int main()
{
  int year;
  enum
  {
    yi = 1,
    er,
    san,
    si,
    wu,
    liu,
    qi,
    ba,
    jiu,
    shi,
    shiyi,
    shier,
  } month;
  int day;
  scanf("%d %d %d", &year, &month, &day);
  if ((year % 400 == 0 && year % 100 == 0) || (year % 4 == 0 && year % 100 != 0))
  {
    // 闰年
    switch (month)
    {
    case yi:
      printf("di %d tian\n", day);
      break;
    case er:
      printf("di %d tian\n", 31 + day);
      break;
    case san:
      printf("di %d tian\n", 31 + 29 + day);
      break;
    case si:
      printf("di %d tian\n", 31 + 29 + 31 + day);
      break;
    case wu:
      printf("di %d tian\n", 31 + 29 + 31 + 30 + day);
      break;
    case liu:
      printf("di %d tian\n", 31 + 29 + 31 + 30 + 31 + day);
      break;
    case qi:
      printf("di %d tian\n", 31 + 29 + 31 + 30 + 31 + 30 + day);
      break;
    case ba:
      printf("di %d tian\n", 31 + 29 + 31 + 30 + 31 + 30 + 31 + day);
      break;
    case jiu:
      printf("di %d tian\n", 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day);
      break;
    case shi:
      printf("di %d tian\n", 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day);
      break;
    case shiyi:
      printf("di %d tian\n", 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day);
      break;
    case shier:
      printf("di %d tian\n", 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day);
      break;
    }
  }
  else
  {
    // 非闰年
    switch (month)
    {
    case yi:
      printf("di %d tian\n", day);
      break;
    case er:
      printf("di %d tian\n", 31 + day);
      break;
    case san:
      printf("di %d tian\n", 31 + 28 + day);
      break;
    case si:
      printf("di %d tian\n", 31 + 28 + 31 + day);
      break;
    case wu:
      printf("di %d tian\n", 31 + 28 + 31 + 30 + day);
      break;
    case liu:
      printf("di %d tian\n", 31 + 28 + 31 + 30 + 31 + day);
      break;
    case qi:
      printf("di %d tian\n", 31 + 28 + 31 + 30 + 31 + 30 + day);
      break;
    case ba:
      printf("di %d tian\n", 31 + 28 + 31 + 30 + 31 + 30 + 31 + day);
      break;
    case jiu:
      printf("di %d tian\n", 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day);
      break;
    case shi:
      printf("di %d tian\n", 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day);
      break;
    case shiyi:
      printf("di %d tian\n", 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day);
      break;
    case shier:
      printf("di  %d tian\n", 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day);
      break;
    }
    return 0;
  }
}