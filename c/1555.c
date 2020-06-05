//1555	Funções	Accepted	C	0.000	09/03/2017 10:33:33
#include <stdio.h>
#include <math.h>

int main(void) {
	
	int beto, rafa, carlos;
	int x,y, k=0, t;
	
	scanf("%d", &t);
	
	while(k<t){
		
		scanf("%d %d", &x, &y);
		
		rafa = pow((3*x),2) + pow(y,2); //(3x)² + y²
		beto = (2 * pow(x,2)) + pow((5*y),2); //2(x²) + (5y)²
		carlos = (-100*x) + pow(y,3); //-100x + y³
		
		if(rafa > beto && rafa > carlos)
			printf("Rafael ganhou\n");
		else if(beto > rafa && beto > carlos)
			printf("Beto ganhou\n");
		else
			printf("Carlos ganhou\n");
		
		k++;
	}
	
	return 0;
}