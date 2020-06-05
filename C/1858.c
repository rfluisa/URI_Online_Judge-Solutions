//1858	A Resposta de Theon	Accepted	C	0.000	01/01/2017 16:06:45
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, resp, indice;

    scanf("%d", &n);

    int vetor[n];

    for(i=0; i<n; i++)
        scanf("%d", &vetor[i]);

    resp = vetor[0];
    indice = 0;

    for(i=0; i<n; i++)
        if(vetor[i]<resp) {
            resp = vetor[i];
            indice = i;
        }

    printf("%d\n", indice+1);

    return 0;
}