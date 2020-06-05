//1329	Cara ou Coroa	Accepted	C	0.008	28/04/2016 17:19:05
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aux, i=0, maria=0, joao=0, n=0;


    do
    {
        scanf("%d", &n);

        for(i=0;i<n; i++)
        {
            scanf("%d", &aux);

            if(aux==0)
                maria++;
            else
                joao++;
        }
        if(n!=0)
            printf("Mary won %d times and John won %d times\n", maria, joao);

        maria=0;
        joao=0;
    }while(n!=0);

    return 0;
}