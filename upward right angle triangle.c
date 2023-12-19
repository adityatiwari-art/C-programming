#include <stdio.h>
main()
{int row=5,coloumn=5,i,j,k,n;
for (n=1;n<=6;n++)
{
k=0;	
for (i=1;i<=row;i++)
{for(j=1;j<=i;j++)
{printf("&");
}
k++;
printf("\n");
}

}
}
