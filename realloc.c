#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,*ptr=NULL;
 //ptr=(int *)malloc(5*sizeof(int));
  ptr=(int *)calloc(5,sizeof(int));
  /*for(i=0;i<5;i++)
  {
    scanf("%d",ptr+i);
  }*/
   for(i=0;i<5;i++)
  {
   printf("%d %d\n",*(ptr+i),&(ptr[i]));
  }
  ptr=(int *)realloc(ptr,8*sizeof(int));
  /*for(i=0;i<8;i++)
  {
    scanf("%d",ptr+i);
  }*/
  //relloc brings tthe old content to the new location 
   for(i=0;i<8;i++)
  {
    printf("%d %d\n",*(ptr+i),&(ptr[i]));
  }
  
  return 0;
}

