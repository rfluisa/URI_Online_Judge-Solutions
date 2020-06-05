//2060	Desafio de Bino	Accepted	C	0.000	07/01/2017 02:37:45
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i=0, n, c2=0, c3=0, c4=0, c5=0;

    scanf("%d", &t);

    while(i<t){

        scanf("%d", &n);

        if(n%2==0)
            c2++;
        if(n%3==0)
            c3++;
        if(n%4==0)
            c4++;
        if(n%5==0)
            c5++;

        i++;
    }

    printf("%d Multiplo(s) de 2\n", c2);
    printf("%d Multiplo(s) de 3\n", c3);
    printf("%d Multiplo(s) de 4\n", c4);
    printf("%d Multiplo(s) de 5\n", c5);


    return 0;
}