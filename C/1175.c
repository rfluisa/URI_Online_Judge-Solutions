//1175	Troca em Vetor I	Accepted	C	0.000	30/12/2016 01:53:03
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20], aux, i, j;

    for(i=0; i<20; i++)
        scanf("%d", &n[i]);

    for(i=0, j=19; i<10; i++, j--) {
         aux = n[i];
         n[i] = n[j];
         n[j] = aux;
    }

    for(i=0; i<20; i++)
        printf("N[%d] = %d\n", i, n[i]);



    return 0;
}