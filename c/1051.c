//1051	Imposto de Renda	Accepted	C	0.000	27/06/2015 19:34:17
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float salario, aux, aux2;

    scanf("%f", &salario);

    if(salario > 0.00 && salario <= 2000.00)
        printf("Isento\n");
    else if(salario > 2000.00 && salario <= 3000.00)
    {
        salario = salario - 2000.00;
        salario = salario * 0.08;
        printf("R$ %.2f\n", salario);

    }
    else if(salario > 3000.00 && salario <= 4500.00)
    {
        salario = (salario - 3000.00) * 0.18;
        printf("R$ %.2f\n", salario + 80.00);
    }
    else if(salario > 4500.00)
    {
        salario = (salario - 4500.00) * 0.28;
        printf("R$ %.2f\n", salario + 350.00);
    }
    return 0;
}