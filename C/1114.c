//1114	Senha Fixa	Accepted	C	0.000	19/02/2016 21:23:07
#include <stdio.h>
 
int main(void) {
	int senha;
 
	do
	{
		scanf("%d", &senha);
		if(senha==2002)
			printf("Acesso Permitido\n");
		else
			printf("Senha Invalida\n");
	}while(senha!=2002);
 
	return 0;
}