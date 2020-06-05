//2547	Montanha-Russa	Accepted	C	0.000	17/08/2017 05:58:12
#include <stdio.h>
 
int main(void) {
	int n, k=0, min, max, res=0, aux;
	
	while(scanf("%d %d %d", &n, &min, &max) != EOF){
	
		while(k<n){
			scanf("%d", &aux);
			
			if(aux>=min && aux<=max)
				res++;
			
			k++;
		}
		printf("%d\n", res);
		res=0;
		k=0;
	}
	return 0;
}