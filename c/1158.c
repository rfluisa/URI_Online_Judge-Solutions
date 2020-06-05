//1158	Soma de Ímpares Consecuti...	Accepted	C	0.000	08/04/2015 19:46:07
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, t, n1, n2, aux=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        aux = 0;
        scanf("%d %d",&n1,&n2);
        if(n1%2==0)
            n1=n1+1;
        else
            n1=n1;
        for(j=1;j<=n2;j++)
        {
            aux = aux+n1;
            n1=n1+2;
        }
        printf("%d\n",aux);

    }


    return 0;
}