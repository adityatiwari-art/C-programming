#include <stdio.h>
int main()
{int size=10,a[size],pos,var,i;
printf("enter the position: ");
scanf("%d",&var);
printf("enter the elements of array:\n");
for (i=0;i<10;i++)
{scanf("%d",&a[i]);
}
for (i=var-1;i<size;i++)
{a[i]=a[i+1];
}

for(i=0;i<size-1;i++)
   printf("%d\t",a[i]);


return 0;
}
