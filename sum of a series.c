#include <stdio.h>
void main()
{int x,i=1,n;
float sum=1;
printf("enter the value of x:\n");
scanf("%d",&x);
printf("enter the value of n:\n");
scanf("%d",&n);
while (i<=n)
{sum=sum+(x^i)/i;
i=i+1;
}
printf("%f",sum);
}

