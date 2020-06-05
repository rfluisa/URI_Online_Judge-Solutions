//1165	Número Primo	Accepted	C	0.012	24/03/2015 21:41:01
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nc, n, i, j, d, r;
    scanf("%d",&nc);
    for(i=1;i<=nc;i++)
    {
        scanf("%d",&n);
        r=0;
        for(j=1;j<=n;j++)
        {
            d=n%j;
            if(d==0)
                r=r+1;
        }
    if(r==2)
        printf("%d eh primo\n", n);
    else
        printf("%d nao eh primo\n", n);
    }
    return 0;
}