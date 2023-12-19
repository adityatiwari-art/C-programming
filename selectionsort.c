#include <stdio.h>
int main()
{int n,i,j,c;
printf("enter the no of elements: ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
  printf("enter the elements: ");
  scanf("%d",&arr[i]);
}
for (i=0;i<n;i++)
     printf("%d",arr[i]);
printf("\n");
//loop for insertion sort//
for (i=1;i<=n-1;i++)
         {j=i;
		      while(arr[j]<arr[j-1])
              { c=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=c;
                j=j-1;     
              }
         }
//loop for insertion sort ends//
for (i=0;i<n;i++)
     printf("%d,",arr[i]);
printf("\n");
return 0;         
}