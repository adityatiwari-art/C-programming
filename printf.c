#include <stdio.h>
main()
{int a=59800;
float b=12345.694332;  
char c='A'            ;  
printf("a:%7dapples\n",a);         //2 spaces+5 digits=7 characters(default right allignment)
printf("a:%-7dapples\n",a);        //5 digits+2 spaces=7 character(left allignment)
printf("a:$%7.4fdollar\n",b);      //5 digits before decimal(mandatory to include )+4 dgits precision !=7 characters (default is right allignment)
printf("a:$%9.1fdollar\n",b);      //two spaces due to right allignment and round of (7digits+2 spaces )
printf("a:$%-9.1fdollar\n",b);     //two spaces dut to left allignment (7digits+2 spaces )
printf("a:$%edollar\n",b);         //exponential form
printf("a:$%Edollar\n",b);         //exponential form
printf("a:$%4.2edollar\n",b);      //field width applied to mantissa in exponential form
printf("a:%4citem\n",c);           //3 spaces +1 character(default character size)
printf("a:%-4citem\n",c);
printf("a:%4.5citem\n",c);
}

