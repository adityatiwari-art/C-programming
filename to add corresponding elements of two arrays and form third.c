#include <stdio.h>
main()
{int a[2][3];
int i,j;
printf("enter the 6 elements\n");
for(i=0;i<=1;i++)
{for(j=0;j<=2;j++)
{scanf("%d\n",&a[i][j]);
}
}
printf("all elements\n");
for(i=0;i<=1;i++)
{for(j=0;j<=2;j++)
{printf("%d\n",a[i][j]);
}
}

}
