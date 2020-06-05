//2753	Saída 7	Accepted	C	0.000	14/10/2018 13:59:07
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char a = 'a';

    for(i=97; i<=122; i++)
        printf("%d e %c\n", i, a++);

    return 0;
}
