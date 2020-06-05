//2147	Galopeira	Accepted	C	0.000	01/01/2017 23:54:10
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[10000];
    int n, k=0;

    scanf("%d", &n);

    while(k<n) {
        scanf("%s", palavra);

        printf("%.2lf\n",strlen(palavra)*0.01);
        k++;
    }

    return 0;
}