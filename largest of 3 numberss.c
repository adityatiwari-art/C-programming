#include <stdio.h>
int main()
{int a,b,c;
printf("enter a: ");
scanf("%d",&a);
printf("enter b: ");
scanf("%d",&b);
printf("enter c: ");
scanf("%d",&c);
if((a==b)==(b==c))
{printf("all are equal\n");
}
else if (a>b)
{if (a>c)
     printf("%d is largest number\n",a);
 else 
     printf("%d is largest number\n",c);
}

else
{if (b>c)
      printf("%d is largest number\n",b);
 else
      printf("%d is largest number\n",c);
	   
}
}
