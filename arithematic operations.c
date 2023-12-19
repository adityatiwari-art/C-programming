/*arithmetic operations*/
#include<stdio.h>
int main()
{int a ,b,sum ,product ,division ,subtraction ,remainder;

 printf("enter the value of first operand: ");
 scanf("%d",&a);
 printf("enter the value of second operand: ");
 scanf("%d",&b);
 sum=a+b;
 product=a*b;
 division=a/b;
 subtraction=a-b;
 remainder=a%b;
 printf("sum=%d\n",sum);
 printf("product=%d\n",product);
 printf("division=%d\n",division);
 printf("sub=%d\n",subtraction);
 printf("remainder=%d\n",remainder);
 return 0;
}
