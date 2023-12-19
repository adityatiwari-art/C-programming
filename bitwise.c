#include <stdio.h>
int main()
{unsigned char a=5,b=9;
 printf("%d\n,%d\n",a,b);
 printf("%d\n",a&b);
 printf("a|b=%d\n",a|b);
 printf("a^b=%d\n",a^b);
 printf("%d\n",a=~a);
 printf("%d\n",b<<1);
 printf("%d\n",b>>1);
 return 0;
}
