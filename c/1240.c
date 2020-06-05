//1240	Encaixa ou Não I	Accepted	C	0.016	09/03/2017 10:20:21
#include <stdio.h>

int main(void) {
	long long int a, b;
	int t, k=0;
	
	scanf("%d", &t);
	
	
	while(k<t) {
		
		scanf("%lli %lli", &a, &b);
		
		while(b>0){
			if(a%10 == b%10){
				b/=10;
				a/=10;
			}
			else{
				printf("nao encaixa\n");
				break;
			}
			if(b==0)
				printf("encaixa\n");
		}
		
		
		k++;
	}
	
	return 0;
}