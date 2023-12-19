#include <stdio.h>
main()
{int i,j,k,rows=5,col=4;
for (i=1;i<=rows;i++)
{for (j=1;i<=col;j++)
     {if (j==1 || j==col)
             {for (k=1;k<=col;k++)
                    {printf("x");}
              printf("\n");
              break;}
      else
      {printf("\n");}
     }
     
}
}

