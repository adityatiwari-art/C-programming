#include<stdio.h>
main()
{int i,j,n=5;

for (i=1;i<=5;i++)
{for (j=1;j<=n;j++)
    {printf("*");}
    printf("\n");
    n=n-1;
}

}
