//1984	O Enigma do Pronalândia	Accepted	C	0.000	21/03/2017 13:49:59
#include <stdlib.h>
#include <stdio.h>

int main(){
	
	unsigned long long n, numero;
	int i, casas=0;
	
	scanf("%llu", &n);
	
	numero = n;
	
	while((numero = numero / 10) > 0){
			casas++;
		}
		
	for(i=casas; i>=0; i--){
		if(n%10 == 0)
			printf("0");
		else
			printf("%d", n%10);
		n/=10;
	}
	printf("\n");
	
	
	return 0;
}