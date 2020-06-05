//1216	Getline One	Accepted	C++	0.024	01/11/2019 01:05:00
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[80];
    double total=0, k=0;
    int dist;

    while((scanf("%s",nome)) != EOF)
    {
        scanf("%d", &dist);
        total+=dist;
        k++;
    }
    
    printf("%.1lf\n", total/k);
    return 0;
}