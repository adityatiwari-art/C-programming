#include  <stdio.h>
int main()
{
  int a=78;
  int *ptr=&a;
  printf("add of a directly %p\n",&a);
  printf("address of a through pointer %p\n",ptr);
  printf("address of pointer itself %p\n",&ptr);
  printf("value through pointer %d\n",*ptr);
  printf("value of a directly %d\n",a);
  printf("address of a in hexa directly %x\n",&a);
  printf("address of a in hexa through ptr %x\n",ptr);
  return 0;   
}