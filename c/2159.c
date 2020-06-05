//2159	Número Aproximado de Primos	Accepted	C	0.000	07/01/2017 02:50:19
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int n;

    scanf("%d", &n);

    printf("%.1lf %.1lf\n", (n/log(n)),(1.25506*n/log(n)));

    return 0;
}