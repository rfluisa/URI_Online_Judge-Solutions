//1045	Tipos de Triângulos	Accepted	C	0.000	21/06/2015 19:53:34
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, j;

    scanf("%d", &x);
    scanf("%d", &y);

    for(i=0; i<y; )
        for(j=1; j<=x; j++)
        {
            if(j==x)
            {
                i++;
                printf("%d\n", i);
            }
            else
            {
                i++;
                printf("%d ", i);
            }
        }

}