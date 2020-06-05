//1387	Og	Accepted	C	0.008	13/03/2017 23:12:18
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, r;

    scanf("%i %i", &l, &r);

    while(l!=0 && r!=0){
        printf("%i\n", l+r);
        scanf("%i %i", &l, &r);
    }
    return 0;
}