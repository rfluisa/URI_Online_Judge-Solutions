//2763	Entrada e Saída CPF	Accepted	C	0.000	14/10/2018 00:29:28
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cpf[14];

    scanf("%s", &cpf);

    printf("%c%c%c\n%c%c%c\n%c%c%c\n%c%c\n",cpf[0],cpf[1],cpf[2],cpf[4],cpf[5],cpf[6],cpf[8],cpf[9],cpf[10],cpf[12],cpf[13]);

    return 0;
}