//2160	Nome no Formulário	Accepted	C	0.000	02/01/2017 01:12:36
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[501];

    gets(palavra);

    if(strlen(palavra)<=80)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}