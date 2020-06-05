//2748	Saída 2	Accepted	C	0.000	14/10/2018 00:48:25
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
        else if(i<9 || i>15)
            printf(" ");
        else if(i == 9)
            printf("Roberto");
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
        else if(i<9 || i>12)
            printf(" ");
        else if(i == 9)
            printf("5786");
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
        else if(i<9 || i>14)
            printf(" ");
        else if(i == 9)
            printf("UNIFEI");
    }

    printf("\n");

    for(i=0; i<39; i++){
        printf("-");
    }

    printf("\n");

    return 0;
}