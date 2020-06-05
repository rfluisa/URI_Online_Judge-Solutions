//1012	Área	Accepted	C	0.000	10/04/2015 12:31:19
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{
    double A, B, C, t, c, ta, q, r;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    t = (A*C)/2;
    c = PI*(C*C);
    ta = ((A+B)*C)/2;
    q = B*B;
    r = A*B;
    printf("TRIANGULO: %.3lf\n", t);
    printf("CIRCULO: %.3lf\n", c);
    printf("TRAPEZIO: %.3lf\n", ta);
    printf("QUADRADO: %.3lf\n", q);
    printf("RETANGULO: %.3lf\n", r);

    return 0;
}