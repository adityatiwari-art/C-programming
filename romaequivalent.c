#include <stdio.h>
//int pf();
int i,num,j;
void pf(int num)
{for(i=2;i<num;i++)
{
while(num%i==0)
{int flag=0;
  for(j=2;j<i;j++)
  {if(i%j==0)
     {flag=1;
     break;}
  }
  if(flag==0)
  {printf("%d\n",i);
  num=num/i;
  if(num==0)
    break;}
  }
}
return;
}
int main()
{printf("enter the number: ");
scanf("%d",&num);
pf(num);
return 0;
}


