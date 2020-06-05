//1115	Quadrante	Accepted	C	0.000	19/02/2016 21:08:47
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;
	
	do
	{
		scanf("%d", &x);
		scanf("%d", &y);
		if(x==0 || y==0)
			break;
		
		if(x>0 && y>0)
			printf("primeiro\n");
		else if(x<0 && y>0)
			printf("segundo\n");
		else if(x<0 && y<0)
			printf("terceiro\n");
		else
			printf("quarto\n");
	}while(x!=0 && y!=0);
	
	
	
	return 0;
}