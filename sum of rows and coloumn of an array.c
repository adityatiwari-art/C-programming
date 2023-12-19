#include <stdio.h>
int main()
{int a[2][3];
int i,j,sum_row,sum_col;
printf("enter the 6 elements\n");
for(i=0;i<=1;i++)
{sum_row=0;
for(j=0;j<=2;j++)
{scanf("%d",&a[i][j]);
sum_row=sum_row+a[i][j];
}
printf("sum of %d row %d\n",i,sum_row);
}


}
