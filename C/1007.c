//1007	Diferença	Accepted	C	0.000	06/03/2015 09:05:54
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, D, DIFERENCA;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    DIFERENCA = (A*B-C*D);
    printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;
}