//1048	Aumento de Salário	Accepted	C	0.000	21/06/2015 19:55:09
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float salario, novo;
    char c = '%';

    scanf("%f",&salario);

    if(salario > 0 && salario <= 400.00)
    {
        novo = salario * 1.15;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", novo-salario);
        printf("Em percentual: 15 %c\n", c);
    }
    else if(salario > 400.00 && salario <= 800.00)
    {
        novo = salario * 1.12;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", novo-salario);
        printf("Em percentual: 12 %c\n", c);
    }
    else if(salario > 800.00 && salario <= 1200.00)
    {
        novo = salario * 1.10;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", novo-salario);
        printf("Em percentual: 10 %c\n", c);
    }
    else if(salario > 1200.00 && salario <=2000.00)
    {
        novo = salario * 1.07;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", novo-salario);
        printf("Em percentual: 7 %c\n", c);
    }
    else if(salario > 2000.00)
    {
        novo = salario * 1.04;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", novo-salario);
        printf("Em percentual: 4 %c\n", c);
    }
    return 0;
}