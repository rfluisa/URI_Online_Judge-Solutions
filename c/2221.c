//2221	Batalha de Pomekons	Accepted	C	0.000	14/03/2017 12:55:36
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n, k=0, A1, B, D1, L1, A2, D2, L2;
	
	scanf("%d", &n);
	
	while(k<n){
		
		scanf("%d", &B);
		scanf("%d %d %d", &A1, &D1, &L1);
		scanf("%d %d %d", &A2, &D2, &L2);
		
		if(L1%2 == 0)
			A1 = ((A1 + D1)/2) + B;
		else
			A1 = (A1 + D1)/2;
		
		if(L2%2 == 0)
			A2 = ((A2 + D2)/2) + B;
		else
			A2 = (A2 + D2)/2;
		
		if(A1 == A2)
			printf("Empate\n");
		else if(A1 > A2)
			printf("Dabriel\n");
		else
			printf("Guarte\n");
			
		k++;
		
	}
	
	return 0;
}