#include <stdio.h>
int main()
{int a[3][3];
int i,j,sum_row,sum_col,sum_digo;
printf("enter the 9 elements\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{scanf("%d",&a[i][j]);
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<=2;i++)
{sum_row=0;   //sum digo not initialised everytime with zero becaus eit is for all rows 
sum_col=0;

for(j=0;j<=2;j++)
{
	sum_col=sum_col+a[j][i];
    sum_row=sum_row+a[i][j];
    if (i==j){sum_digo=sum_digo+a[i][j];
	}

}
printf("\nsum of %d row %d\n",i,sum_row);
printf("\nsum of %d col %d\n",i,sum_col);

}
printf("sum of digonal is %d",sum_digo);    /*must be printed outside because not 
                                            like row or a coloumn it should be printed after 
                                            all the rows are executed within the loop*/

}
