//1186	Abaixo da Diagonal Secund...	Accepted	C	0.000	13/03/2017 02:03:41
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float m[12][12], tot=0;
    int i, j;
    char op;

    scanf(" %c", &op);

    for(i=0; i<12; i++)
        for(j=0; j<12; j++)
            scanf("%f", &m[i][j]);

    for(i=1; i<12; i++)
        for(j=11; j>=12-i; j--)
            tot += m[i][j];

    if(op == 'S')
        printf("%.1f\n", tot);
    else
        printf("%.1f\n", tot/66);
    return 0;
}