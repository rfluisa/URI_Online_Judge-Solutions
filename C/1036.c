//1036	Fórmula de Bhaskara	Accepted	C	0.000	20/04/2015 12:23:07
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float A, B, C, delta, R1, R2;

    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);

    delta = pow(B,2)+((-4.0)*A*C);

    if(delta<0 || A==0)
        printf("Impossivel calcular\n");
    else
    {
        R1 = (-1.0*B)+ pow(delta,0.5);
        R1 = R1/(2.0*A);
        R2 = (-1.0*B)- pow(delta,0.5);
        R2 = R2/(2.0*A);

        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }


    return 0;
}