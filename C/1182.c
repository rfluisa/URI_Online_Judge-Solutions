//1182	Coluna na Matriz	Accepted	C	0.000	30/12/2016 03:30:13
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    double m[12][12], tot=0;
    char op;

    scanf("%d", &n);
    scanf(" %c", &op);

    for(i=0; i<12; i++)
        for(j=0; j<12; j++)
            scanf("%lf", &m[i][j]);

    for(i=0; i<12; i++)
        tot += m[i][n];

    if(op == 'S')
        printf("%.1lf\n", tot);
    else
        printf("%.1lf\n", tot/12);

    return 0;
}