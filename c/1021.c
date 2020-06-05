//1021	Notas e Moedas	Accepted	C	0.000	16/04/2015 10:34:42
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double f;
    int n, n1, centavos, centavos1;

    scanf("%lf", &f);

    f = f*100;
    n = f;
    centavos = n%100;

    n = n/100;
    n1 = n/100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n1);
    n = n%100;

    n1 = n/50;
    printf("%d nota(s) de R$ 50.00\n", n1);
    n = n%50;

    n1 = n/20;
    printf("%d nota(s) de R$ 20.00\n", n1);
    n = n%20;

    n1 = n/10;
    printf("%d nota(s) de R$ 10.00\n", n1);
    n = n%10;

    n1 = n/5;
    printf("%d nota(s) de R$ 5.00\n", n1);
    n = n%5;

    n1 = n/2;
    printf("%d nota(s) de R$ 2.00\n", n1);
    n = n%2;

    printf("MOEDAS:\n");
    n1 = n/1;
    printf("%d moeda(s) de R$ 1.00\n", n1);

    centavos1 = centavos/50;
    printf("%d moeda(s) de R$ 0.50\n", centavos1);

    centavos = centavos%50;
    centavos1 = centavos/25;
    printf("%d moeda(s) de R$ 0.25\n", centavos1);

    centavos = centavos%25;
    centavos1 = centavos/10;
    printf("%d moeda(s) de R$ 0.10\n", centavos1);

    centavos = centavos%10;
    centavos1 = centavos/5;
    printf("%d moeda(s) de R$ 0.05\n", centavos1);

    centavos = centavos%5;
    printf("%d moeda(s) de R$ 0.01\n", centavos);


    return 0;
}