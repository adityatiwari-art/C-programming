#include <stdio.h>
int main()
{int i,j,star,var,row,coloumn;
star=coloumn/2;
var=coloumn/2;
printf("enter the number of row: ");
scanf("%d",&row);
printf("enter the number of coloumn: ");
scanf("%d",&coloumn);
for (j=0;j<row;j++)   
{for (i=0;i<var;i++)
     printf(" ");
 for (i;i>=var && i<=star;i++)
     printf("*");
star=star+1;
var=var-1;
printf("\n");
}
return 0;
}
