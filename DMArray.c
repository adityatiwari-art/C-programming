#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *ptr=NULL;
 int i,n;
 printf("enter the number of elements to the array :");
 scanf("%d",&n);
 ptr=(int *)malloc(n*sizeof(int));
 for ( i = 0; i < n; i++)
 {
  printf("enter the %d element",i+1);
  scanf("%d",ptr+i);
 }
 for ( i = 0; i < n; i++)
 {
  printf("value of %d element=%d",i+1,*(ptr+i));
 
 }
 free(ptr);
 for ( i = 0; i < n; i++)
 {
  printf("value of %d element=%d",i+1,*(ptr+i));
 
 }
   return 0;
}
