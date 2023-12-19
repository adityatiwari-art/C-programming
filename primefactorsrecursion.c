#include <stdio.h>
int sum1(int num, int *s);
int main()
{
  int num, sum = 0;
  printf("enter the number: ");
  scanf("%d", &num);
  sum1(num, &sum);
  return 0;
}
int sum1(int num, int *s)
{
  if (num == 0)
  {
    printf("value of sum is:%d", *s
    return 0;
  }
  else
  {
    *s = *s + (num % 10);
    num = num / 10;
    sum1(num,s);
  }
}
