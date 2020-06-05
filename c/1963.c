//1963	O Filme	Accepted	C	0.000	07/01/2017 02:58:22
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;

    scanf("%lf %lf", &a, &b);

    printf("%.2lf%%\n", ((b*100)/a)-100);


    return 0;
}