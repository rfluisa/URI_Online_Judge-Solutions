//1118	Várias Notas Com Validação	Accepted	C	0.000	28/04/2016 18:19:55
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    int op;


    do
    {
        do
        {
            scanf("%f", &n1);
            if(n1<0 || n1>10)
                printf("nota invalida\n");
        }while(n1<0 || n1>10);

        do
        {
            scanf("%f", &n2);
            if(n2<0 || n2>10)
                printf("nota invalida\n");
        }while(n2<0 || n2>10);

        printf("media = %.2f\n", (n1+n2)/2);

        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &op);
        }while(op<1 || op>2);

    }while(op!=2);


    return 0;
}