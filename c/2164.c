//2164	Fibonacci Rápido	Accepted	C	0.000	02/01/2017 00:12:22
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);

    printf("%.1lf\n", (pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n))/sqrt(5));

    return 0;
}