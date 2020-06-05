//1047	Tempo de Jogo com Minutos	Accepted	C	0.000	20/05/2016 14:06:04
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1, h2, m1, m2;

    scanf("%d %d %d %d", &h1, &m1, &h2,&m2);

    h1*=60;
    h1+=m1;

    h2*=60;
    h2+=m2;

    if(h1==h2)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if(h2<h1)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((24*60)-(h1-h2))/60, ((24*60)-(h1-h2))%60);
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(h2-h1)/60, (h2-h1)%60);


    return 0;
}