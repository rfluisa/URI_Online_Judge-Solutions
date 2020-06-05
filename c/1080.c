//1080	Maior e Posição	Accepted	C	0.000	30/07/2015 16:37:49
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, j, k=0, maior, posicao, n[100];
    for(i=0; i<100; i++)
    {
        scanf("%i",&n[i]);
    }
    for(i=0; i<100; i++)
    {
        for(j=0; j<100; j++)
        {
            if(n[i] > n[j])
            {
                k++;
            }
            if(k == 99)
            {
                maior = n[i];
                posicao = i+1;
            }
        }
        k=0;
    }
     
    printf("%i\n", maior);
    printf("%i\n", posicao);
    return 0;
}