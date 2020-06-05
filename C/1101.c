//1101	Sequência de Números e Soma	Accepted	C	0.000	28/04/2016 18:11:29
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0, i, x, y, aux1;

    do
    {
        scanf("%d", &x);
        scanf("%d", &y);

        if(x>y)
        {
            aux1 = y;
            y = x;
            x = aux1;
        }
        soma = 0;

        if(x>0 && y>0)
        {
            for(i=x; i<=y; i++)
            {
                printf("%d ", i);
                soma+=i;
            }

            printf("Sum=%d\n",soma);
        }
    }while(x>0 && y>0);

    return 0;
}