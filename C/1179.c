//1179	Preenchimento de Vetor IV	Accepted	C	0.000	13/03/2017 02:34:34
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int imp[5], par[5], n, aux, i=0, p=0, k=0;

    while(k<15) {

        scanf("%i", &n);

        if(n%2 == 0) {
            par[p] = n;
            k++;
            p++;
        }
        else {
            imp[i] = n;
            k++;
            i++;
        }

        if(i == 5) {
            for(i=0; i<5; i++)
                printf("impar[%i] = %i\n", i, imp[i]);
            for(i=0; i<5; i++)
                imp[i] = NULL;
            i=0;
        }

        else if(p == 5) {
            for(p=0; p<5; p++)
                printf("par[%i] = %i\n", p, par[p]);
            for(p=0; p<5; p++)
                par[p] = NULL;
            p=0;
        }

        else if(k == 15) {
            for(aux=0; aux<=i; aux++){
                if(imp[aux] != NULL)
                    printf("impar[%i] = %i\n", aux, imp[aux]);
            }
            for(aux=0; aux<=p; aux++){
                if(par[aux] != NULL)
                    printf("par[%i] = %i\n", aux, par[aux]);
            }
        }


    }

    return 0;
}
