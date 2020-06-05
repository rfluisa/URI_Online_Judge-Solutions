//1079	Médias Ponderadas	Accepted	C	0.000	19/07/2015 23:24:20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, t=0;
    float  notas[3];

    scanf("%i", &n);

    while(t<n)
    {
        for(i=0; i<3; i++)
        {
            scanf("%f", &notas[i]);
        }

        printf("%.1f\n", ((notas[0]*0.2)+(notas[1]*0.3)+(notas[2]*0.5)));

        t+=1;
    }


    return 0;
}