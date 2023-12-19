#include <stdio.h>
main()
{
int marks;
printf("enter the marks : ");
scanf("%d",&marks);
switch(marks/10)
{case 9:
 case 8:
	printf("grade is:A\n");
	break;
case 7 :
	printf("grade is :B\n");
	break;
	
case 6:
	printf("grade is :C\n");
	break;
	
case 5:
	printf("grade is:D\n");	
	break;
default:
	printf("fail\n");
}
}
