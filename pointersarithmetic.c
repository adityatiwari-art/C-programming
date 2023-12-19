/*++ and -- are same both pre and post increment and decrement operator 
and their output  is as for normal numbers but they also changes the value in the memory of the pointers as in simple numbers +,- only shows the reult but do not do any manupulation in the memory 
 */
#include  <stdio.h>
int main()#include <stdio.h>
int func1(int arr[]);
int main()
{
  int arr[] = {23, 13, 3, 4,5,6,7,8,2,8};
  func1(arr);
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