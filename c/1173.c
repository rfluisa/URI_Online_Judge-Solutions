//1173	Preenchimento de Vetor I	Accepted	C	0.000	30/12/2016 01:27:35
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i, n;

    scanf("%d", &n);
    v[0] = n;

    for(i=1; i<10; i++)
            v[i] = v[i-1]*2;

    for(i=0; i<10; i++)
        printf("N[%d] = %d\n", i, v[i]);


    return 0;
}