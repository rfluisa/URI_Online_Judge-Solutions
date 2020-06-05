//1153	Fatorial Simples	Accepted	C	0.000	09/05/2016 00:32:24
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i=n-1; i>0; i--)
        n*=i;
    printf("%d\n", n);
    
    return 0;
}