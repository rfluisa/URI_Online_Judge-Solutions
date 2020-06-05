//1011	Esfera	Accepted	C	0.000	26/03/2015 11:39:46
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{
    int R;
    double V;
    scanf("%d", &R);
    V = (4/3.0)*PI*R*R*R;
    printf("VOLUME = %.3lf\n", V);
 
    return 0;
}