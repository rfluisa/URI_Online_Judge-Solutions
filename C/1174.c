//1174	Seleçao em Vetor I	Accepted	C	0.000	30/12/2016 01:34:21
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[100];
    int i;

    for(i=0; i<100; i++)
        scanf("%lf", &a[i]);

    for(i=0; i<100; i++)
        if(a[i] <= 10)
            printf("A[%d] = %.1lf\n", i, a[i]);


    return 0;
}