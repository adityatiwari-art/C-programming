#include  <stdio.h>
int main()
{int i,flag=0;
int n;//array shouldnot be declared before otherwise it will take n=0 as n=0 before input
//so first take n then then declare the array otherwise arr[0]
printf("enter thee size of array");
scanf("%d",&n);
char arr[n];
printf("enter the string ");
scanf("%s",&arr);
puts(arr);
for (i=0;i<(n-1)/2;i++)     //take care of i<n/2 
{
if (arr[i]!=arr[n-1-i-1])
   {
   printf("the string is not palindrome\n");
   flag=1;
   break;}
}
if(flag==0) 
   printf("palindrome\n");
return 0;
}


