#include <stdio.h>
#include <string.h>
int main()
{char s1[10],s2[10],s3[10];
gets(s1);
gets(s2);
printf("%s\n",s1);
printf("%s\n",s2);
printf("%d\n",strlen(s1));
puts(strrev(s2));
puts(strcpy(s3,s1));
puts(strcat(s1,s2));
printf("%d\n",strcmp(s2,s1));
printf("%s\n",s2);
}