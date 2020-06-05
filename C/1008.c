//1008	Salário	Accepted	C	0.000	10/03/2015 07:51:46
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, h;
   float v, s;
   scanf("%d",&n);
   scanf("%d",&h);
   scanf("%f",&v);
   s = v*h;
   printf("NUMBER = %d\n", n);
   printf("SALARY = U$ %.2f\n", s);
   return 0;
}