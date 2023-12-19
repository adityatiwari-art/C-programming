#include <stdio.h>
main()
{int a[5],i,even=0,odd=0;

for (i=0;i<=4;i++)
{scanf("%d",&a[i]);
}
for (i=4;i>=0;i--)
{if (a[i]%2==0)
{
even=even+1;

}
else{odd=odd+1;

}

}
printf("%d elements are even\n",even);
printf("%d elements are odd\n",odd);

}
