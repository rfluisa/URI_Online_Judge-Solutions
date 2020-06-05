//1067	Números Ímpares	Accepted	C	0.000	01/07/2015 23:56:27
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    scanf("%i", &n);

    for(i=1; i<=n; i++)
    {
        if(i%2 !=0)
            printf("%i\n", i);
    }
    return 0;
}