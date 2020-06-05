//1789	A Corrida de Lesmas	Accepted	C	0.012	01/01/2017 17:15:59
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, maior, l;

    while(scanf("%d", &n) != EOF) {
        for(i=0; i<n; i++){

            scanf("%d", &l);
            if(i==0)
                maior = l;
            else if(l>maior)
                maior = l;
        }

        if(maior<10)
            printf("1\n");
        else if(maior>=10 && maior<20)
            printf("2\n");
        else
            printf("3\n");
    }


    return 0;
}