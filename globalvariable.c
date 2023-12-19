#include <stdio.h>
int t;
int func()
{
  t++;
  printf("%d", t);
}
int main()
{
  t++;
  func();
}
