//1132	Múltiplos de 13	Accepted	C	0.000	28/04/2016 18:34:21
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, aux, soma=0, i;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x>y)
    {
        aux = x;
        x = y;
        y = aux;
    }

    for(i=x; i<=y; i++)
        if(i%13!=0)
            soma+=i;

    printf("%i\n", soma);


    return 0;
}