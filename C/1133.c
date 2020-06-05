//1133	Resto da Divisão	Accepted	C	0.000	28/04/2016 18:36:41
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

    for(i=x+1; i<y; i++)
        if(i%5==2 || i%5==3)
            printf("%i\n", i);




    return 0;
}