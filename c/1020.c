//1020	Idade em Dias	Accepted	C	0.000	14/04/2015 11:42:46
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, ano, mes;
    scanf("%d",&n);

    ano = n/365;
    printf("%d ano(s)\n", ano);

    n = n%365;
    mes = n/30;
    printf("%d mes(es)\n", mes);

    n = n%30;
    printf("%d dia(s)\n", n);


    return 0;
}
