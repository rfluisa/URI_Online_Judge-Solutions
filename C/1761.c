//1761	Decoração Natalina	Accepted	C	0.012	13/03/2017 00:53:07
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592654

int main()
{
    double ang, dist, h;

    while(scanf("%lf %lf %lf", &ang, &dist, &h) != EOF) {

    ang = (ang*PI)/180;
    printf("%.2lf\n", ((tan(ang)*dist)+h)*5);
    
    }

    return 0;
}