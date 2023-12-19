#include <stdio.h>
main()
{
int marks;
printf("enter the marks : ");
scanf("%d",&marks);
switch(marks/10)         //will give int value and excluded decimal part 
{case 9:               //common body
 case 8:              //whole 80 line is covered since it excluded decimal part
	printf("grade is:A\n");
	break;
case 7 :            //whole 70 line is covered since it excluded decimal part
	printf("grade is :B\n");
	break;
	
case 6:              //whole 60 line is covered since it excluded decimal part
	printf("grade is :C\n");
	break;
	
case 5:               //whole 50 line is covered since it excluded decimal part
	printf("grade is:D\n");	
	break;
default:
	printf("fail\n");6
}
}
