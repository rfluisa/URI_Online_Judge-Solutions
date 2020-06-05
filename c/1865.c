//1865	Mjölnir	Accepted	C	0.000	01/01/2017 18:10:36
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    int n, k=0, x;
    char nome[80], sim[]="Thor";

    scanf("%d", &n);

    while(k<n) {

        scanf("%s %d", nome, &x);

        if(strcmp(nome, sim)==0)
            printf("Y\n");
        else
            printf("N\n");

        k++;
    }
    return 0;
}