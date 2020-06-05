//1176	Fibonacci em Vetor	Accepted	C	0.000	10/04/2015 11:58:29
#include <stdio.h>
int main()
{
    long long int aux, f0=0, f1=1;
    int i, j, t, n;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);

        if (n==0)
            printf("Fib(%d) = 0\n",n);
        else if(n==1 || n==2)
            printf("Fib(%d) = 1\n",n);
        else
        {
            for(j=1;j<n;j++)
            {
                aux = f0 + f1;
                f1=f0;
                f0=aux;

            }
        printf("Fib(%d) = %lli\n",n, aux+f1);
        aux=0;
        f0=0;
        f1=1;
        }

    }
    return 0;
}