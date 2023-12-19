#include <stdio.h>
//int func();
int b,i,num;
int func(int num,int m,char ch)
{b=num/m;
 for(int i=0;i<b;i++)
    printf("%c",ch);
 return num%m;   
}
int main()
{int num;
printf("enter the number: ");
scanf("%d",&num);
num=func(num,1000,'M');
num=func(num,500,'D');
num=func(num,100,'C');
num=func(num,50,'L');
num=func(num,10,'X');
num=func(num,5,'V');
num=func(num,1,'i'); 

  return 0;
}

