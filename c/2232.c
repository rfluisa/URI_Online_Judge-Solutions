//2232	Triângulo de Pascal	Accepted	C	0.000	30/12/2016 16:49:22
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int k=0, t, n, i, tot=0;

    scanf("%d", &t);

    while(k<t) {

        scanf("%d", &n);

        for(i=0; i<n; i++)
            tot+=pow(2,i);

        printf("%d\n", tot);

        tot = 0;
        k++;
    }

    return 0;
}