//2766	Entrada e Saída Lendo e P...	Accepted	C++	0.000	10/01/2019 22:10:55
#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50], nome2[50], nome3[50], nome4[50];
    
    for(int i=0; i<10; i++){
        scanf(" %s", &nome);
        if(i==2)
            strcpy(nome2,nome);
        else if(i==6)
            strcpy(nome3,nome);
        else if(i==8)
            strcpy(nome4,nome);
    }
    
    printf("%s\n%s\n%s\n", nome2, nome3, nome4);
    
    return 0;
}