/*unit conversion*/
#include <stdio.h>
int main()
{int cm,m,km,f,in;
 printf("Enter th km:  ");
 scanf("%d",&km);
 m=km*1000;
 cm=m*100;
 f=km*3280.84;
 in=km*39370.08;
 printf("in_meters=%d\n",m);
 printf("in_centimeter=%d\n",cm);
 printf("in_feet=%d\n",f);
 printf("in_inches=%d\n",in);
 return 0;
}
