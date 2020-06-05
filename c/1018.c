//1018	Cédulas	Accepted	C	0.000	14/04/2015 11:30:47
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, n1;

    scanf("%d", &n);
    printf("%d\n", n);
    n1 = n/100;
    printf("%d nota(s) de R$ 100,00\n", n1);
    n = n%100;

    n1 = n/50;
    printf("%d nota(s) de R$ 50,00\n", n1);
    n = n%50;

    n1 = n/20;
    printf("%d nota(s) de R$ 20,00\n", n1);
    n = n%20;

    n1 = n/10;
    printf("%d nota(s) de R$ 10,00\n", n1);
    n = n%10;

    n1 = n/5;
    printf("%d nota(s) de R$ 5,00\n", n1);
    n = n%5;

    n1 = n/2;
    printf("%d nota(s) de R$ 2,00\n", n1);
    n = n%2;

    n1 = n/1;
    printf("%d nota(s) de R$ 1,00\n", n1);

    return 0;
}