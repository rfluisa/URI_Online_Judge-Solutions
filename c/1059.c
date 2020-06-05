//1059	Números Pares	Accepted	C	0.000	20/06/2015 00:17:07
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;

    for(i=1; i<101; i++)
    {
        if(i%2 == 0)
            printf("%i\n",i);
    }

    return 0;
}