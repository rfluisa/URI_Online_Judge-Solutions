//1933	Tri-du	Accepted	C	0.000	07/01/2017 02:54:54
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if(a>=b)
        printf("%d\n", a);
    else
        printf("%d\n", b);

    return 0;
}