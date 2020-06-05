//1848	Corvo Contador	Accepted	C	0.000	04/01/2017 23:18:38
#include <stdio.h>
#include <stdlib.h>


int main()
{
    char nome[8];
    int tot=0, k=0;

    while(k<3) {

        gets(nome);

        if(strcmp(nome, "caw caw")==0){
            k++;
            printf("%d\n", tot);
            tot = 0;
        }
        else {
            if(nome[0]=='*')
                tot+=4;
            if(nome[1]=='*')
                tot+=2;
            if(nome[2]=='*')
                tot+=1;
        }


    }


    return 0;
}