//1010	Cálculo Simples	Accepted	C	0.000	11/03/2015 20:51:13
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p1, p2, vp1, vp2;
    float qp1, qp2, t;
    scanf("%d %d %f", &p1, &vp1, &qp1);
    scanf("%d %d %f", &p2, &vp2, &qp2);
    t = (qp1*vp1)+(qp2*vp2);
    printf("VALOR A PAGAR: R$ %.2f\n", t);
    return 0;
}