#include <stdio.h>
void main()
{int a=5,b;
/*b=++a-a++;
printf("%d\n",b);*/
b=a++-(++a);
printf("%d\n",b);
}