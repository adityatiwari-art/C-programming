#include  <stdio.h>
int main()
{int i;
int n;
printf("enter thee size of array");
scanf("%d",&n);
int arr[n];
for (i=0;i<=n-1;i++)
{printf("enter %d element: ",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<=n-1;i++)
     printf("%d ",arr[i]);
printf("\n");

  
for (i=0;i<n/2;i++)     //take care of i<n/2 
{int c;
c=arr[i];
arr[i]=arr[n-i-1];
arr[n-i-1]=c;
}
for(i=0;i<=n-1;i++)
    printf("%d ",arr[i]);
printf("\n");
return 0;
}
