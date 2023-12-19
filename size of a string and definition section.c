#include<stdio.h>
#define PM "Narendra Modi"
int main()
{
 printf("%s\n",PM);
 printf("%d\n",sizeof(PM));                       /*its actual size is 13 but the compiler 
                                                  adds a null character at last due to which
										        its size is 14 and not 13*/
 printf("size_of_string=%d" ,sizeof(PM)-1);
 return 0;
}
