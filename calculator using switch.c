#include <stdio.h>
main()
{char ch;
int a,b;
printf("enter the operarion character: ");
scanf("%c",&ch);
printf("enter operand1 : ");
scanf("%d",&a);
printf("enter operand2 : ");
scanf("%d",&b);

switch(ch)
{case '+':
	printf("sum=%d",a+b);
    break;
case '-':
	printf("sub=%d",a-b);
	break;
case '*':
	printf("product=%d",a*b);
	break;
case '/':
	printf("quotient=%d",a/b);
	break;
case '%':
	printf("remainder=%d",a%b);
	break;
default:
    printf("the input character is invald\n");	
    break;
}
}
