//2749	Saída 3	Accepted	C	0.000	14/10/2018 00:57:04
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for(i=0; i<39; i++){
        printf("-");
    }

    printf("\n");

    for(i=0; i<39; i++){
        if(i==0 || i==38)
            printf("|");
        else if(i>6)
            printf(" ");
        else if(i == 1)
            printf("x = 35");
    }

    printf("\n");

    for(i=0; i<39; i++){
        if(i==0 || i==38)
            printf("|");
        else
            printf(" ");
    }

    printf("\n");

    for(i=0; i<39; i++){
        if(i==0 || i==38)
            printf("|");
        else if(i>0 && i<16 || i > 21)
            printf(" ");
        else if(i == 16)
            printf("x = 35");
    }

    printf("\n");

    for(i=0; i<39; i++){
        if(i==0 || i==38)
            printf("|");
        else
            printf(" ");
    }

    printf("\n");

    for(i=0; i<39; i++){
        if(i==0 || i==38)
            printf("|");
        else if(i>0 && i<32)
            printf(" ");
        else if(i == 32)
            printf("x = 35");
    }

    printf("\n");

    for(i=0; i<39; i++){
        printf("-");
    }

    printf("\n");

    return 0;
}