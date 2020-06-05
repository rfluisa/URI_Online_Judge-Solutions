//1015	Distância Entre Dois Pontos	Accepted	C	0.000	13/04/2015 11:51:33
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float d, x1, x2, y1, y2;
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);

    d = pow((x2-x1),2) + pow((y2-y1),2);
    d = pow(d,0.5);

    printf("%.4f\n", d);
    return 0;
}