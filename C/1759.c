//1759	Ho Ho Ho	Accepted	C	0.008	30/12/2016 17:39:53
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(i==n)
            printf("Ho!\n");
        else
            printf("Ho ");
    }

    return 0;
}