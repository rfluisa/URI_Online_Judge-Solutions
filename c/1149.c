//1149	Somando Inteiros Consecut...	Accepted	C	0.000	07/05/2016 21:44:45
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, n, i,soma=0;

    scanf("%d %d", &a, &n);

    if(n<=0)
        do
        {
            scanf("%d", &n);
        }while(n<=0);

    for(i=0; i<n; i++)
    {
        soma+=a;
        a++;
    }

    printf("%d\n", soma);
}