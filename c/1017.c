//1017	Gasto de Combustível	Accepted	C	0.000	13/04/2015 12:08:25
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t, vm;
    float l, km;
    scanf("%d", &t);
    scanf("%d", &vm);

    km = t*vm;
    l = km/12;


    printf("%.3f\n", l);
    return 0;
}
