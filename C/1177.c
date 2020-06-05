//1177	Preenchimento de Vetor II	Accepted	C	0.000	30/12/2016 02:24:49
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[1000], n, i, j;

    scanf("%d", &n);

    for(i=0, j=0; i<1000; i++, j++) {
        if(j==n)
            j=0;

        v[i] = j;
    }


    for(i=0; i<1000; i++)
        printf("N[%d] = %d\n", i, v[i]);

    return 0;
}