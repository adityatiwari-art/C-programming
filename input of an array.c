#include <stdio.h>
int main()
{int a[2][3];
int i,j,sum_row,sum_col;
printf("enter the 6 elements\n");
for(i=0;i<=1;i++)
{
for(j=0;j<=2;j++)
{scanf("%d",&a[i][j]);
}
}
for(i=0;i<=1;i++)
{
for(j=0;j<=2;j++)
{printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<=1;i++)
{sum_row=0;
for(j=0;j<=2;j++)
{
sum_row=sum_row+a[i][j];
}
printf("\nsum of %d row %d\n",i,sum_row);
}
for(j=0;j<=2;j++)
{sum_col=0;
for(i=0;i<=1;i++)
{
sum_col=sum_col+a[i][j];
}
printf("\nsum of %d col %d\n",j,sum_col);
}


}
