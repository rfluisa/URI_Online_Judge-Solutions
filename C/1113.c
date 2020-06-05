//1113	Crescente e Decrescente	Accepted	C	0.000	06/02/2016 16:30:11
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testes, i, k=0, dias;
    float suprimento, qtd;

    scanf("%d", &testes);

    do
    {
        scanf("%f", &suprimento);

        for(i=0; suprimento>1; i++)
            suprimento/=2;

        printf("%d dias\n", i);


        k++;
    }while(k<testes);
}