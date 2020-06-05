//1072	Intervalo 2	Accepted	C	0.000	19/07/2015 21:47:17
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, z, in=0, out=0;

    scanf("%i", &n);

    for(i=0; i<n; i++)
    {
        scanf("%i", &z);
        if(z>=10 && z<= 20)
            in++;
        else
            out++;
    }

    printf("%i in\n", in);
    printf("%i out\n", out);

    return 0;
}