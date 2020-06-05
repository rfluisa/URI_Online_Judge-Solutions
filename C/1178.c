//1178	Preenchimento de Vetor III	Accepted	C	0.000	30/12/2016 02:35:02
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double v[1000], n;
    int i;

    scanf("%lf", &n);

    v[0] = n;

    for(i=1; i<100; i++) {
        v[i] = v[i-1]/2;
    }


    for(i=0; i<100; i++)
        printf("N[%d] = %.4lf\n", i, v[i]);

    return 0;
}