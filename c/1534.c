//1534	Matriz 123	Accepted	C	0.016	13/03/2017 13:32:47
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t, i, j;
    
    while(scanf("%i", &t)!=EOF){
    
	    int m[t][t];
	    
	    for(i=0; i<t; i++)
	    	for(j=0; j<t; j++){
	    		if(i==j)
	    			m[i][j] = 1;
				else if(j==(t-1-i))
					m[i][j] = 2;
				else
					m[i][j] = 3;
			}
			
		if(t%2 != 0)
			m[t/2][t/2] = 2;
			
		for(i=0; i<t; i++){
			for(j=0; j<t; j++)
				printf("%i", m[i][j]);
		printf("\n");
		}
	}
	
    return 0;
}