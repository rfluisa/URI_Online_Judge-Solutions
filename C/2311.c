//2311	Saltos Ornamentais	Accepted	C	0.000	09/01/2017 01:57:58
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int t, i, k=0;
    double n, tot=0, maior, menor, dif;
    char nome[30];

    scanf("%d",&t);

    while(k<t){

        scanf("%s", &nome);
        scanf("%lf", &dif);
        scanf("%lf", &n);
        maior = n;
        menor = n;
        tot+=n;

        for(i=0; i<6; i++){

            scanf("%lf", &n);

            if(n>maior)
                maior = n;
            if(n<menor)
                menor = n;
            tot+=n;
        }

        tot-=(menor+maior);

        printf("%s %.2lf\n", nome, tot*dif);

        tot=0;

        k++;
    }

    return 0;
}