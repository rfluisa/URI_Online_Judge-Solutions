//1146	Sequências Crescentes	Accepted	C	0.160	07/05/2016 16:31:12
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1, i;

    do
    {
        scanf("%d", &x);

        if(!x==0)
            for(i=1; i<=x; i++)
            {
                if(i==x)
                    printf("%d\n", i);
                else
                    printf("%d ",i);
            }

    }while(x!=0);

}