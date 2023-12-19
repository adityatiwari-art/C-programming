#include  <stdio.h>
int main()
{int i;
int n;//array shouldnot be declared before otherwise it will take n=0 as n=0 before input
//so first take n then then declare the array otherwise arr[0]
printf("enter thee size of array");
scanf("%d",&n);
char arr[n];
{printf("enter the string ");
scanf("%s",&arr);
}
puts(arr);
for (i=0;i<(n-1)/2;i++)     //take care of i<n/2 
{int c;
c=arr[i];
arr[i]=arr[n-1-i-1];
arr[n-1-i-1]=c;
}
puts(arr);
printf("\n");
return 0;
}

