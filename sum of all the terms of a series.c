#include <stdio.h>
#include <math.h>
main()
{float x,sum=1;
int i=1,n;
printf("enter the value of x");
scanf("%f\n",&x);
printf("enter the value of n");
scanf("%d\n",&n);
while(i<=n){
sum=sum+(pow(x,i))/i;
i=i+1;
}
printf("%f",sum);
}

