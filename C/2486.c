//2486	C Mais ou Menos?	Accepted	C	0.000	09/01/2017 01:37:09
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int t=1, i=0, qtd, tot=0;
    char alimento[20];


    while(t!=0){

        scanf("%d", &t);

        while(i<t){

            scanf("%d %[^\n]", &qtd, &alimento);

            if(strcmp(alimento,"suco de laranja")==0)
                tot+=qtd*120;
            else if(strcmp(alimento,"morango fresco")==0 || strcmp(alimento, "mamao")==0)
                tot+=qtd*85;
            else if(strcmp(alimento,"goiaba vermelha")==0)
                tot+=qtd*70;
            else if(strcmp(alimento,"manga")==0)
                tot+=qtd*56;
            else if(strcmp(alimento,"laranja")==0)
                tot+=qtd*50;
            else if(strcmp(alimento,"brocolis")==0)
                tot+=qtd*34;

            i++;
        }
        if(!tot==0){
            if(tot>=110 && tot<=130)
                printf("%d mg\n", tot);
            else if(tot<110)
                printf("Mais %d mg\n", (110-tot));
            else
                printf("Menos %d mg\n", (tot-130));
        }

        i=0;
        tot=0;


    }

    return 0;
}