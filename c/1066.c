//1066	Pares, Ímpares, Positivos...	Accepted	C	0.000	06/02/2016 16:37:40
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, cont=0, pos=0, neg=0, imp=0, par=0;

    do
    {
        scanf("%i", &x);
        if(x>0)
            pos++;
        else if(x<0)
            neg++;
        if(x%2==0)
            par++;
        else
            imp++;

        cont++;
    }while(cont<5);

    printf("%i valor(es) par(es)\n", par);
    printf("%i valor(es) impar(es)\n", imp);
    printf("%i valor(es) positivo(s)\n", pos);
    printf("%i valor(es) negativo(s)\n", neg);



    return 0;
}