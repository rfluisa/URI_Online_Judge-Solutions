//1046	Tempo de Jogo	Accepted	C	0.000	27/04/2015 11:27:34
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ini, fim, total;
    scanf("%d",&ini);
    scanf("%d",&fim);

    if(ini<fim)
    {
        total = fim - ini;
        printf("O JOGO DUROU %d HORA(S)\n",total);
    }
    else if(fim<ini)
    {
        total = 24 - ini;
        total = total + fim;
        printf("O JOGO DUROU %d HORA(S)\n",total);
    }
    else if(ini == fim)
        printf("O JOGO DUROU 24 HORA(S)\n");

    return 0;
}