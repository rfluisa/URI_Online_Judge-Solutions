//1189	Área Esquerda	Accepted	C	0.000	13/03/2017 12:15:54
#include <stdio.h>
#include <stdlib.h>

int main()
{

    double m[12][12], tot=0;
    int i, j, k;
    char op;

    scanf(" %c", &op);

    for(i=0; i<12; i++)
        for(j=0; j<12; j++)
            scanf("%lf", &m[i][j]);

    for(j=0, k=10; j<=4; j++, k--)
        for(i=j+1; i<=k; i++)
            tot += m[i][j];


    if(op == 'S')
        printf("%.1lf\n", tot);
    else
        printf("%.1lf\n", tot/30);
    return 0;
}