//1144	Sequência Lógica	Accepted	C	0.000	07/05/2016 16:17:23
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
        printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
    }

}