//1197	Volta à Faculdade de Física	Accepted	C	0.012	07/05/2016 14:36:46
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v, t;

    while(scanf("%d %d", &v, &t)!=EOF)
        printf("%d\n",v*t*2);
}