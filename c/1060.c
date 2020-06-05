//1060	Números Positivos	Accepted	C	0.000	27/06/2015 17:49:54
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float valores[6];
    int i, k=0;

    for(i=0; i<6; i++)
    {
        scanf("%f",&valores[i]);
        if(valores[i] > 0)
            k++;
    }

    printf("%i valores positivos\n",k);

    return 0;
}