//1170	Blobs	Accepted	C	0.000	07/05/2016 14:24:17
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