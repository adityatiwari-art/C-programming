#include <stdio.h>
int main()
{ /*if a variable is loccal then it is in terms of block not in terms of function block */
  if(1)
  {
   int a=6;
  printf("%d",a);
   
  }
  printf("%d",a);
}
 