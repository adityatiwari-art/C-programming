#include <stdio.h>
#include <math.h>
int func(int *,double *, double *);
int main()
{
  int  sum;
  double  avg,stdev;
  func(&sum, &avg, &stdev);
  printf("%d\n", sum); 
  printf("%lf\n", avg);
  printf("%lf\n", stdev);
  return 0;
}
int func(int *s, double *av, double *sd)
{ int a, b, c, d, e;
  printf("enter the 5 numbers: ");
  scanf("%d%d%d%d%d",&a, &b, &c, &d,&e);
  *s = a + b + c + d + e;
  *av = *s/(double) 5;
  *sd = sqrt((pow((a - *av), 2) + pow((b - *av), 2) + pow((c - *av), 2) + pow((d - *av), 2) + pow((e - *av), 2)) / 5) ;
  return 0;
}