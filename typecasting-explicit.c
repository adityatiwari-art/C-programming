#include <stdio.h>
int main()
{
int arr[]={1,2,3,4,5,6,7,8};
printf("%d\n",arr);
printf("%d\n",&arr[0]);
printf("%d\n",&arr[1]);
printf("%d\n",arr+1);
printf("%d\n",&arr[2]);
printf("%d\n",arr+2);
printf("%d\n",arr);
printf("\n\n\n\n");
printf("%d\n",arr[0]);
printf("%d\n",*arr);
printf("%d\n",arr[1]);
printf("%d\n",*(arr+1));
printf("%d\n",arr[2]);
printf("%d\n",*(arr+2));
return 0;
}