#include <stdio.h>
int main()
{int ele,mid,low=0,a[10]={1,2,3,234,777,898,5656,90000,123456,23243424},high=sizeof(a)/sizeof(a[0])-1,found=0;
printf("enter the element to be searched: ");
scanf("%d",&ele);

while (low<=high)
{
mid=(low+high)/2;
if(ele==a[mid])
     {
	 printf("element found at location %d",mid+1);
     found=1;
     break;}
 else if (ele<a[mid])    
     high=mid-1;
 else if (ele>a[mid]) 
     low=mid+1;   
}
if (found==0)
    printf("\nelement not found");
return 0;
}
