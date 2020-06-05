//2518	Escada do DINF	Accepted	C	0.000	10/05/2017 10:19:43
#include <stdio.h>
#include <math.h>

int main(void) {
	
	int n, h, c, l;
	
	while(scanf("%d", &n) != EOF){
		
		scanf("%d %d %d", &h, &c, &l);
		
		printf("%.4lf\n", ( l*n* sqrt((c*c)+(h*h)) )/10000 );
		
	}
	
	
	
	return 0;
}