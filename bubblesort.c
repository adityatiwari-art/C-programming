#include <stdio.h>
int main()
{const int n;
int is_sorted=1;
printf("enter the no of elements: ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
  printf("enter the elements: ");
  scanf("%d",&arr[i]);
}
for (int i=0;i<n;i++)
     printf("%d",arr[i]);
printf("\n");
for (int i=1;i<=n-1;i++)
         {for (int k=0;k<=n-i-1;k++)
              {if(arr[k]>arr[k+1])
              {int c;
               c=arr[k];
               arr[k]=arr[k+1];
               arr[k+1]=c;}
               else
                continue;
              }

         }
for (int i=0;i<n;i++)
     printf("%d,",arr[i]);
printf("\n");

return 0;         
}