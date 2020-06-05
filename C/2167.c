//2167	Falha do Motor	Accepted	C	0.000	17/08/2017 04:56:35
#include <stdio.h>
 
int main(void) {
	int vetor[10000], i, aux=0, n;
 
	scanf("%d", &n);
 
	for(i=0; i<n; i++){
		scanf("%d", &vetor[i]);
 
		if(i>0 && vetor[i]<vetor[i-1]){
			aux = i+1;
			break;
		}
	}
 
	printf("%i\n", aux);
 
	return 0;
}