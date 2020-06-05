//1172	Substituição em Vetor I	Accepted	C	0.000	30/12/2016 01:23:55
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i;

    for(i=0; i<10; i++) {

        scanf("%d", &v[i]);

        if(v[i] <= 0)
            v[i] = 1;
    }

    for(i=0; i<10; i++)
        printf("X[%d] = %d\n", i, v[i]);


    return 0;
}