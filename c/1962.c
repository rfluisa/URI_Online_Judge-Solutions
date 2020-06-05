//1962	Há Muito, Muito Tempo Atrás	Accepted	C	0.032	13/03/2017 09:16:44
#include<stdio.h>

int main() {
    long long int ano;
	int k=0, p;
	
	scanf("%i", &p);
	
	while (k<p){
	    
	    scanf("%lli", &ano);
	    
	    if(ano>=0 && ano<=2014)
	        printf("%lli D.C.\n", 2015-ano);
	    else{
	        if((2014-ano)<0)
	            printf("%lli A.C.\n", -1*(2014-ano));
	        else
	            printf("%lli A.C.\n", (2014-ano));
	    }
	        
	    
	    
	    k++;
	}
}