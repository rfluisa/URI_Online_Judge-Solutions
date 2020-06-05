//1564	Vai Ter Copa?	Accepted	C	0.000	30/12/2016 17:42:41
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    while(scanf("%d", &n) != EOF){
        if(n==0)
            printf("vai ter copa!\n");
        else
            printf("vai ter duas!\n");
    }

    return 0;
}