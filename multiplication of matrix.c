#include <stdio.h>
int main()
{int i,m,n,p,j,k,sum;

printf("enter rows in first\n ");
scanf("%d",&m);
printf("enter coloumn in first\n ");
scanf("%d",&n);
printf("enter coloumn in second\n ");
scanf("%d",&p);
int a[m][n],b[n][p],c[m][p];
printf("elements of array a\n");
for (i=0;i<m;i++)
{for (j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}

printf("b array \n");
for (i=0;i<n;i++)
{for (j=0;j<p;j++)
     scanf("%d",&b[i][j]);   
}
for (i=0;i<m;i++)
{for (k=0;k<p;k++)
       {sum=0;
	   for (j=0;j<m;j++)
           {sum=sum+a[i][j]*b[j][k];
            c[i][k]=sum;
	       }
        	   
       }
}
printf("c array \n");
for (i=0;i<m;i++)
{for (j=0;j<p;j++)
     printf("%d\t",c[i][j]);   
 printf("\n");    
}
return 0;
}

