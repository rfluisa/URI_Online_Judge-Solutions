//1065	Pares entre Cinco Números	Accepted	C	0.000	01/07/2015 23:23:05
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n[5], k=0;

    for(i=0; i<5; i++)
    {
        scanf("%i",&n[i]);
        if((n[i]%2) == 0)
            k++;
    }
    printf("%i valores pares\n", k);

    return 0;
}