#include <stdio.h>
int prime(int num, int i);
int main()
{
  int num;
  printf("enter the number: ");
  scanf("%d", &num);
  prime(num, 2);
  return 0;
}
int prime(int num, int i)
{
  if (i <= num)
  {
    if (num % i == 0)
    {
      printf("%d,", i);
      num = num / i;
    }
    else
      i++;
    prime(num, i);
  }
  return 0;
}
