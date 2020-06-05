//1157	Divisores I	Accepted	C	0.000	11/05/2016 19:07:02
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
        if(n%i==0)
            printf("%i\n", i);

    return 0;
}