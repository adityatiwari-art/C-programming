#include <stdio.h>
//int pf();
int b,i,num;
void pf(int num)
{for(int i=2;i<num;i++)
{int flag=0;
  for(int j=2;j<i;j++)
  {if(i%j==0)
     flag=1;
     break;
  }
  if(flag==0)
  {if(num%i==0)
      printf("%d\n",i);
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

