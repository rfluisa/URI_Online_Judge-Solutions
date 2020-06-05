//1151	Fibonacci Fácil	Accepted	C	0.000	08/05/2016 20:39:19
#include <stdio.h>
int main()
{
    int n, j, f0=1, f1=1, aux;

    scanf("%d",&n);

    if(n==0)
        printf("0\n");
    else if(n==1)
        printf("0 1\n");
    else if(n==2)
        printf("0 1 1\n");
    else
    {
        n++;
        printf("0 1 1 ");
        for(j=4;j<n;j++)
        {
             aux = f0 + f1;
             f1=f0;
             f0=aux;
             if(j==n-1)
                printf("%d\n", aux);
             else
                printf("%d ", aux);
        }
    }
    return 0;
}