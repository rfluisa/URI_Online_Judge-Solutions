//2334	Patinhos	Accepted	C	0.092	04/05/2017 14:07:21
#include <stdio.h>

int main(void) {
	unsigned long long patinhos;
	
	while((scanf("%llu", &patinhos)) != -1){
		if(patinhos == 0)
			printf("0\n");
		else if(patinhos != -1)
			printf("%llu\n",patinhos-1);
	}
	
	return 0;
}