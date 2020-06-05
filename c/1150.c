//1150	Ultrapassando Z	Accepted	C	0.000	08/05/2016 19:51:52
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, z, i, soma=0;

    scanf("%d", &x);

    do
    {
        scanf("%d", &z);
    }while(z<=x);

    for(i=0; soma<z; x++, i++)
        soma+=x;

    printf("%d\n", i);

    return 0;
}