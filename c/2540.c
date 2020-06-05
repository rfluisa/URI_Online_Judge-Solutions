//2540	Impeachment do Líder	Accepted	C	0.260	01/11/2019 01:58:51
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, aux, votos=0;
    
    while(scanf("%d", &n) != EOF){
        
        for(i=0; i<n; i++){
            scanf("%d",&aux);
        
            if(aux == 1)
                votos++;
        }
        
        if(votos >= (float)n/3*2)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");

        votos=0;
    }

    return 0;
}