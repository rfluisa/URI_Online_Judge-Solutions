//1184	Abaixo da Diagonal Principal	Accepted	C	0.000	30/12/2016 18:18:22
#include <stdio.h>
#include <stdlib.h>

int main()
{

    double m[12][12], tot=0;
    int i, j;
    char op;

    scanf(" %c", &op);

    for(i=0; i<12; i++)
        for(j=0; j<12; j++)
            scanf("%lf", &m[i][j]);

    for(i=0; i<11; i++)
        for(j=i+1; j<12; j++)
            tot += m[j][i];

    if(op == 'S')
        printf("%.1lf\n", tot);
    else
        printf("%.1lf\n", tot/66);
    return 0;
}