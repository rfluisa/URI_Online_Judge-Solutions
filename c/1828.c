//1828	Bazinga!	Accepted	C	0.000	02/01/2017 17:23:41
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
            printf("Caso #%d: De novo!\n", k);

        else {

            if(strcmp(nome2, "papel")==0){
                if(strcmp(nome1, "lagarto") == 0 || strcmp(nome1, "tesoura")==0)
                    printf("Caso #%d: Bazinga!\n", k);
                else
                    printf("Caso #%d: Raj trapaceou!\n", k);
            }

            else if(strcmp(nome2, "pedra")==0){
                if(strcmp(nome1, "papel")==0 || strcmp(nome1, "Spock")==0)
                    printf("Caso #%d: Bazinga!\n", k);
                else
                    printf("Caso #%d: Raj trapaceou!\n", k);
            }
            else if(strcmp(nome2, "lagarto")==0){
                if(strcmp(nome1, "pedra")==0 || strcmp(nome1, "tesoura")==0)
                    printf("Caso #%d: Bazinga!\n", k);
                else
                    printf("Caso #%d: Raj trapaceou!\n", k);
            }
            else if(strcmp(nome2, "Spock")==0){
                if(strcmp(nome1, "lagarto")==0 || strcmp(nome1, "papel")==0)
                    printf("Caso #%d: Bazinga!\n", k);
                else
                    printf("Caso #%d: Raj trapaceou!\n", k);
            }
            else if(strcmp(nome2, "tesoura") == 0){
                if(strcmp(nome1, "Spock") == 0 || strcmp(nome1, "pedra")==0)
                    printf("Caso #%d: Bazinga!\n", k);
                else
                    printf("Caso #%d: Raj trapaceou!\n", k);
            }
        }


        k++;
    }


    return 0;
}