//1216	Getline One	Accepted	C	0.020	14/03/2017 18:58:36
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