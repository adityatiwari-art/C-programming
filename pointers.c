#include  <stdio.h>
int main()
{
  int a=4;
  int *ptr =&a;
  printf("add of a :%d\n",ptr);
  printf("add of a(++) :%d\n",++ptr);
  printf("add of a(--) :%d\n",--ptr);
  printf("add of a(+1) :%d\n",ptr+1);
  printf("add of a(-1) :%d\n",ptr-1);
  printf("add of a(+2) :%d\n",ptr+2);
  printf("add of a(-2):%d\n",ptr-2);
   printf("add of a(--) :%d\n",--ptr);
  printf("add of a :%d\n",ptr);
  printf("value at a :%d\n",*ptr);
  printf("value at a :%d\n",a);
  return 0;
}