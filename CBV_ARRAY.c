
#include  <stdio.h>
int func1(int arr[]);
int func2(int *ptr);
int main()
{
  int arr[] = {23, 13, 3, 4,5,6,7,8,2,8};
  func2(arr);
  printf("\n\n\n");  
  func1(arr);
  printf("\n\n\n");  
  func3(arr);
  return 0;
}
int func1(int arr[])
{
for(int i=0;i<10;i++)
{
printf("the value at i is: %d\n",arr[i]); 
}
return 0;
}   

int func2(int *ptr)
{
for(int i=0;i<10;i++)
{
printf("the value at i is: %d\n",ptr[i]); 
}
*ptr=34;
printf("\n\n\n");
return 0;
}   


int func3(int *ptr)
{
for(int i=0;i<10;i++)
{
printf("the value at i is: %d\n",*(ptr+i)); 
}
return 0;
}                                                                 