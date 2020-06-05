//1073	Quadrado de Pares	Accepted	C	0.000	19/07/2015 22:08:20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=2;

    scanf("%i", &n);

    if(n%2 != 0)
        n=n+1;

    do
    {
        printf("%i^2 = %i\n", i, (i*i));
        i+=2;
    }while(i<=n);

    return 0;
}