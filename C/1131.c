//1131	Grenais	Accepted	C	0.000	28/04/2016 18:30:49
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grenais=0, gremio, inter, gv=0, iv=0, empates=0, op=0;

    do
    {
        scanf("%d", &inter);
        scanf("%d", &gremio);
        grenais++;
        if(inter>gremio)
            iv++;
        else if(gremio>inter)
            gv++;
        else
            empates++;
        do
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &op);
        }while(op<1 || op>2);

    }while(op!=2);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", iv);
    printf("Gremio:%d\n", gv);
    printf("Empates:%d\n", empates);

    if(iv>gv)
        printf("Inter venceu mais\n");
    else if(iv>gv)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");


    return 0;
}