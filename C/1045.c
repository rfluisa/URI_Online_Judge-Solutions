//1045	Tipos de Triângulos	Accepted	C	0.000	21/06/2015 19:53:34
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float A, B, C, aux;

    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);

    if(A > B && A > C)
    {
        if(C > B)
        {
            aux = B;
            B = C;
            C = aux;
        }
    }

    if(B > A && B > C)
    {
        aux = A;
        A = B;
        B = aux;

        if(C > B)
        {
            aux = B;
            B = C;
            C = aux;

        }
    }

    if(C > B && C > A)
    {
        aux = A;
        A = C;
        C = aux;

        if(A > B)
        {
            aux = B;
            B = C;
            C = aux;

        }
        else
        {
            aux = C;
            C = B;
            B = aux;
        }
    }


    if(A >= (B + C))
        printf("NAO FORMA TRIANGULO\n");
    else if(A*A == (B*B + C*C))
        printf("TRIANGULO RETANGULO\n");
    else if(A*A > (B*B + C*C))
        printf("TRIANGULO OBTUSANGULO\n");
    else if(A*A < (B*B + C*C))
        printf("TRIANGULO ACUTANGULO\n");



    if(A==B && B==C)
        printf("TRIANGULO EQUILATERO\n");
    else if(A==B || B==C || A==C)
        printf("TRIANGULO ISOSCELES\n");


    return 0;
}