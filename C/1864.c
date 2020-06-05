//1864	Nossos Dias Nunca Voltarão	Accepted	C	0.000	01/01/2017 15:09:10
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n, i;

    scanf("%d", &n);

    for(i=0; i<n; i++)
        printf("%c", frase[i]);
    printf("\n");
    return 0;
}