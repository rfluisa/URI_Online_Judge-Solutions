//1117	Validação de Nota	Accepted	C	0.000	19/02/2016 21:49:01
#include <stdio.h>

int main(void) {
	
	int aux=0;
	float nota, media=0;
	
	
	do
	{
		do
		{
			scanf("%f", &nota);
			if(nota<0 || nota>10)
				printf("nota invalida\n");
			else
				media+=nota;
		}while(nota<0 || nota>10);
		
		aux++;
	}while(aux<2);
	
	printf("media = %.2f\n", media/2);
	
	return 0;
}