//2059	Ímpar, Par ou Roubo	Accepted	C	0.000	14/03/2017 13:11:40
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int op, j1, j2, r, a, win;
	
	scanf("%d %d %d %d %d", &op, &j1, &j2, &r, &a);
	
	if(r==1 && a==0)
		win = 1;
	else if(r==1 && a==1)
		win = 2;
	else if(r==0 && a==1)
		win = 1;
	else{
		if(op==1){
			if((j1+j2)%2 == 0)
				win = 1;
			else
				win = 2;
		}
		else{
			if((j1+j2)%2 != 0)
				win = 1;
			else
				win = 2;
		}
	}
	
	printf("Jogador %d ganha!\n", win);
	
	return 0;
}