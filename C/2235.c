//2235	Andando no Tempo	Accepted	C	0.000	14/03/2017 13:56:03
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==b || b==c || c==a)
		printf("S\n");
	else if(((a+b)==c)||((a+c)==b)||((c+b)==a))
		printf("S\n");
	else
		printf("N\n");
	
	
	return 0;
}