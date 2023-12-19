#include <stdio.h>
int swap(int *x,int *y);
int main()
{int a=56,b=78;
printf("%d\n",a);
printf("%d\n",b);
swap(&a,&b);
printf("%d\n",a);
printf("%d\n",b);
return 0;
}
int swap(int* x,int *y)
{int var;
var=*x;
*x=*y;    //value is assigned to the address contained by x
*y=var;    //value is assigned to the address contained by y
  return 0;
}