//1038	Lanche	Accepted	C	0.000	20/04/2015 13:21:35
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float n1, n2;

    scanf("%f",&n1);
    scanf("%f",&n2);

    if(n1==1)
        n1 = 4.0;
    else if(n1==2)
        n1 = 4.50;
    else if(n1==3)
        n1 = 5.00;
    else if(n1==4)
        n1 = 2.00;
    else if(n1==5)
        n1 = 1.50;


    printf("Total: R$ %.2f\n",n1*n2);

    return 0;
}