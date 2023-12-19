#include <stdio.h>
extern int j;
int func()
{ static int g=5;
 auto int f=5;
  g=g+1;
  f=f+1;
  printf("inside function func %d %d\n",g,f); 
  printf("addresses %d %d\n",&g,&f);
}

int main()
{
  
  /*{
    auto int i = 2;
    {
      auto int i = 3;
      printf("%d\n", i);
      printf("%d\n", &i);
    }
    printf("%d\n", i);
    printf("%d\n", &i);
  }
  printf("%d\n", i);*/
 
 // func();
 // func();
 // func();
  //func();
  j=12;
  printf("%d",j);

  return 0;
}
