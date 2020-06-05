//1169	Trigo no Tabuleiro	Accepted	C++	0.000	17/10/2018 17:17:03
#include <iostream>
#include <math.h>
#include <algorithm>
 
using namespace std;
 
int main() {
 
	int testes, casas;
	unsigned long long int soma=0;
	double aux=0;
	cout << fixed;
	cout.precision(0);
	cin >> testes;
 
	for(int i=0; i<testes; i++){
 
		cin >> casas;
        if(casas == 64){
            for(int j=0; j<casas; j++){
			    aux+=pow(2,j);
		    }
		    
		    cout << aux/12000 << " kg\n";
	    }
		else{
		    for(int j=0; j<casas; j++){
			    soma+=pow(2,j);
		    }
		    
		    cout << soma/12000 << " kg\n";
		}
        
        aux = 0;
		soma = 0;
 
	}
 
	return 0;
}