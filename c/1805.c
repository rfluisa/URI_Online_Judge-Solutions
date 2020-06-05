//1805	Soma Natural	Accepted	C	0.000	14/10/2018 01:30:35
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b;
    int i;
    scanf("%lli %lli", &a, &b);

    printf("%lli\n", (a+b)*(b-a+1)/2);

    return 0;
}