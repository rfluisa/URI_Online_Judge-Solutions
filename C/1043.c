#include <stdio.h>
//1043	Triângulo	Accepted	C	0.000	22/04/2015 23:42:56s
#include <stdlib.h>

int main()
{
    float n1, n2, n3, r;
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);



    if((n1>=n2+n3)||(n2>=n1+n3)||(n3>=n1+n2))
    {
        r = ((n1+n2)*n3)/2;
        printf("Area = %.1f\n",r);
    }

    else
        printf("Perimetro = %.1f\n",(n1+n2+n3));
    return 0;
}