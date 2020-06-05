//2747	Saída 1	Accepted	C	0.000	14/10/2018 00:35:34
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for(i=0; i<39; i++){
        printf("-");
    }

    for(j=0; j<5; j++){
        printf("\n");

        for(i=0; i<39; i++){
            if(i==0 || i==38)
                printf("|");
            else
                printf(" ");
        }
    }

    printf("\n");

    for(i=0; i<39; i++){
        printf("-");
    }

    printf("\n");

    return 0;
}