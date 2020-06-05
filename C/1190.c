//1190	Área Direita	Accepted	C	0.000	13/03/2017 12:20:50
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

    for(i=11, k=1; i>=7; i--,k++)
        for(j=i-1; j>=k; j--)
            tot += m[j][i];


    if(op == 'S')
        printf("%.1lf\n", tot);
    else
        printf("%.1lf\n", tot/30);
    return 0;
}