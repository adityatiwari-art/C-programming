#include <stdio.h>
int a;
void main()
{printf("enter your call: ");
a=scanf("%d",&a);
int x=10,y;
switch(a)
{
case(1):
          y=x--;
          printf("%d\n",x); 
          printf("%d\n",y);
	      break;
case(2):
          y=x++;
          printf("%d\n",x); 
          printf("%d\n",y);
          break;
case(3):
          y=--x; 
          printf("%d\n",x); 
          printf("%d\n",y);
          break;
case(4):
          y=++x; 
          printf("%d\n",x); 
          printf("%d\n",y);
          break;
}
}
main