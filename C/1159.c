//1159	Soma de Pares Consecutivos	Accepted	C	0.000	20/05/2016 13:39:06
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, tot=0;

    while(n!=0)
    {
        scanf("%d", &n);
        if(n==0)
            break;

        if(n%2!=0)
            n++;

        for(i=0; i<5; i++)
        {
            tot+=n;
            n+=2;
        }

        printf("%d\n", tot);

        tot=0;

    }
    return 0;
}