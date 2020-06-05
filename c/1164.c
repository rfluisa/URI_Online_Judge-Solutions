//1164	Número Perfeito	Accepted	C	0.000	11/05/2016 19:12:09
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=0, n, i, soma=0, teste;

    scanf("%d", &teste);

    do
    {
        scanf("%d", &n);

        for(i=1; i<n; i++)
            if(n%i==0)
                soma+=i;

        if(soma==n)
            printf("%i eh perfeito\n", n);
        else
            printf("%i nao eh perfeito\n", n);

        k++;
        soma=0;
    }while(k<teste);

    return 0;
}
