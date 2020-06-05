//1180	Menor e Posição	Accepted	C	0.000	30/12/2016 03:11:06
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, val, pos, n;

    scanf("%d", &n);

    int v[n];

    for(i=0; i<n; i++)
        scanf("%d", &v[i]);

    val=v[0];
    pos = 0;

    for(i=1; i<n; i++)
        if(v[i] < val) {
            val = v[i];
            pos = i;
        }
    printf("Menor valor: %d\n", val);
    printf("Posicao: %d\n", pos);

    return 0;
}