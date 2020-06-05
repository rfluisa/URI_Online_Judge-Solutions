//1094	Experiências	Accepted	C	0.000	16/03/2016 16:45:55
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int teste, aux=0, cobaias, c=0, r=0, s=0, total=0;
    char cob, por='%';
    float cp, cr, cs;

    scanf("%d", &teste);

    do
    {
        scanf("%d", &cobaias);
        scanf(" %c", &cob);

        total+=cobaias;

        if(cob=='c' || cob=='C')
            c+=cobaias;
        else if(cob=='r' || cob=='R')
            r+=cobaias;
        else if(cob=='S' || cob=='s')
            s+=cobaias;

        aux++;
    }while(aux<teste);

    printf("Total: %i cobaias\n", total);
    printf("Total de coelhos: %i\n", c);
    printf("Total de ratos: %i\n", r);
    printf("Total de sapos: %i\n", s);
    cp=(c*100.0);
    cp/=total*1.0;
    cr=(r*100.0);
    cr/=total*1.0;
    cs=(s*100.0);
    cs/=total*1.0;
    printf("Percentual de coelhos: %.2f %c\n", cp, por);
    printf("Percentual de ratos: %.2f %c\n", cr, por);
    printf("Percentual de sapos: %.2f %c\n", cs, por);




    return 0;
}