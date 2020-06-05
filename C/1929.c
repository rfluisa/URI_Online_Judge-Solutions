//1929	Triângulo	Accepted	C	0.000	04/01/2017 23:37:56
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(abs(b-c) < a && a < (b+c)){
        if(abs(a-c) < b && b < (a+c))
            if(abs(a-b) < c && c < (b+a))
                printf("S\n");
    } else if(abs(b-d) < a && a < (b+d)) {
        if(abs(a-d) < b && b < (a+d))
            if(abs(a-b) < d && d < (a+b))
                printf("S\n");
    } else if(abs(c-d) < a && a < (c+d)) {
        if(abs(a-d) < c && c < (a+d))
            if(abs(a-c) < d && d < (a+c))
                printf("S\n");
    } else if(abs(c-d) < b && b < (c+d)) {
        if(abs(b-d) < c && c < (b+d))
            if(abs(c-b) < d && d < (c+b))
                printf("S\n");
    } else
        printf("N\n");

    return 0;
}