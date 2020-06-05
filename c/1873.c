//1873	Pedra-papel-tesoura-lagar...	Accepted	C	0.000	14/03/2017 08:45:58
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome1[12], nome2[12];
    int n, k=1;

    scanf("%d", &n);

    while(k<=n) {

        scanf(" %s %s", nome1, nome2);

        if(strcmp(nome1, nome2)==0)
            printf("empate\n");

        else {

            if(strcmp(nome2, "papel")==0){
                if(strcmp(nome1, "lagarto") == 0 || strcmp(nome1, "tesoura")==0)
                    printf("rajesh\n", k);
                else
                    printf("sheldon\n");
            }

            else if(strcmp(nome2, "pedra")==0){
                if(strcmp(nome1, "papel")==0 || strcmp(nome1, "spock")==0)
                    printf("rajesh\n");
                else
                    printf("sheldon\n");
            }
            else if(strcmp(nome2, "lagarto")==0){
                if(strcmp(nome1, "pedra")==0 || strcmp(nome1, "tesoura")==0)
                    printf("rajesh\n");
                else
                    printf("sheldon\n");
            }
            else if(strcmp(nome2, "spock")==0){
                if(strcmp(nome1, "lagarto")==0 || strcmp(nome1, "papel")==0)
                    printf("rajesh\n");
                else
                    printf("sheldon\n");
            }
            else if(strcmp(nome2, "tesoura") == 0){
                if(strcmp(nome1, "spock") == 0 || strcmp(nome1, "pedra")==0)
                    printf("rajesh\n");
                else
                    printf("sheldon\n");
            }
        }

        k++;
    }


    return 0;
}