//1116	Dividindo X por Y	Accepted	C	0.004	16/03/2016 16:55:56
#include <stdio.h>

int main(void) {

	int num, x, y, aux=0;
	float res;

	scanf("%d", &num);

	do
	{
		scanf("%d", &x);
		scanf("%d", &y);

		if(y==0)
			printf("divisao impossivel\n");
		else
        {
			res = (x*1.0)/(y*1.0);
			printf("%.1f\n", res);
        }

		aux++;
	}while(aux<num);
	return 0;
}