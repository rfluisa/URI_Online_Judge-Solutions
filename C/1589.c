//1589	Bob Conduite	Accepted	C	0.000	30/12/2016 17:46:44
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, r1, r2, k=0;

    scanf("%d", &n);

    while (k<n) {

        scanf("%d %d", &r1, &r2);

        printf("%d\n", r1+r2);
        k++;
    }

    return 0;
}