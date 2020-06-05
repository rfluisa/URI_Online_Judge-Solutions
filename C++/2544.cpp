//2544	Kage Bunshin no Jutsu	Accepted	C++	0.000	09/01/2019 01:07:09
#include <stdio.h>

using namespace std;

int main()
{
    int n, k=0;
    
    while(scanf("%d", &n) != EOF){
    	if(n == 1)
    		printf("0\n");
    	else{
    		while(n!=1){
    			n/=2;
    			k++;
    		}
    		printf("%d\n", k);
    		k=0;
    	}
    	
    }
    return 0;
}