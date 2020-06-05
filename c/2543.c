//2543	Jogatina UFPR	Accepted	C	0.020	10/05/2017 09:45:39
#include <stdio.h>

int main(void) {
	
	int qtd=1, id, tipo, jogador, k=0, tot=0;
	
	while(scanf("%d %d", &qtd, &id) != EOF){
		
		while(k<qtd){
			scanf("%d %d", &jogador, &tipo);
			
			if(jogador == id && tipo == 0)
				tot++;
			
			k++;
		}
		
		printf("%d\n", tot);
		tot=0;
		k=0;
	}
	
	
	
	return 0;
}