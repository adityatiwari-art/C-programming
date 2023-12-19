#include <stdio.h>
int main()
{int a[10],pos,val,i;
printf("enter the element: ");
scanf("%d",&val);
printf("enter the elements of array:\n");
for (i=0;i<9;i++)
{scanf("%d",&a[i]);
}
for (i=0;i<10;i++)
{if (a[i]>val)
   {pos=i+1;
    break;
   }
}
for (i=9;i>=pos-1;i--)
{a[i]=a[i-1];
}
a[pos-1]=val;
for(i=0;i<10;i++)
   printf("%d\t",a[i]);



return 0;
}
