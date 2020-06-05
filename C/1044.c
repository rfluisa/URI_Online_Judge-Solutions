//1044	Múltiplos	Accepted	C	0.000	22/04/2015 18:05:08
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, r;
    scanf("%d",&n1);
    scanf("%d",&n2);

    if(n1>n2)
        r = n1%n2;
    else
        r = n2%n1;

    if(r==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

    return 0;
}