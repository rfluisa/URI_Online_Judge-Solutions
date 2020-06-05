//1035	Teste de Seleção 1	Accepted	C	0.000	17/04/2015 09:07:36
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, D;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);

    if((B>C)&&(D>A)&&((C+D)>(A+B))&&(C>0)&&(D>0)&&(A%2==0))
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    return 0;
}