//1187	Área Superior	Accepted	C	0.000	13/03/2017 11:03:58
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

    for(i=0; i<5; i++)
        for(j=i+1; j<=10-i; j++)
            tot += m[i][j];

    if(op == 'S')
        printf("%.1lf\n", tot);
    else
        printf("%.1lf\n", tot/30);
    return 0;
}