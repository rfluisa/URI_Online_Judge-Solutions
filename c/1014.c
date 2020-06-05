//1014	Consumo	Accepted	C	0.000	13/04/2015 11:32:07
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float y, c;
    scanf("%d", &x);
    scanf("%f", &y);

    c = x/y;

    printf("%.3f km/l\n", c);
    return 0;
}