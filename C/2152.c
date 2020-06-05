//2152	Pepe, Já Tirei a Vela!	Accepted	C	0.000	02/01/2017 00:19:10
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, k=0, h, m, o;

    scanf("%d", &n);

    while(k<n) {

        scanf("%d %d %d", &h, &m, &o);

        if(h<10)
            printf("0%d:", h);
        else
            printf("%d:", h);

        if(m<10)
            printf("0%d", m);
        else
            printf("%d", m);

        if(o==1)
            printf(" - A porta abriu!\n");
        else
            printf(" - A porta fechou!\n");


        k++;
    }

    return 0;
}