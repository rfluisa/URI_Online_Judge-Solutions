//1169	Trigo no Tabuleiro	Accepted	C	0.000	01/11/2019 02:18:11
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
 
	int testes, casas, i, j;
	unsigned long long soma=0;
	double aux=0;
	
	scanf("%i", &testes);
 
	for(i=0; i<testes; i++){
 
		scanf("%i", &casas);
        if(casas == 64){
            for(j=0; j<casas; j++){
			    aux+=pow(2,j);
		    }
		    
		    printf("%.0f kg\n", aux/12000);
	    }
		else{
		    for(j=0; j<casas; j++){
			    soma+=pow(2,j);
		    }
		    
		    printf("%llu kg\n", soma/12000);
		}
        
        aux = 0;
		soma = 0;
 
	}
 
	return 0;
}