//2679	Sucessor Par	Accepted	C	0.000	20/12/2017 13:01:13
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    long long int x;

    scanf("%lli", &x);

    if(x%2==0)
        printf("%lli\n", x+2);
    else
        printf("%lli\n", x+1);


    return 0;
}