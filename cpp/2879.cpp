//2879	Desvendando Monty Hall	Accepted	C++	0.000	19/10/2018 18:04:06
#include <iostream>

using namespace std;

int main()
{
    
    int n, testes, wins=0;
    
    cin >> testes;
    
    
    for(int i=0; i<testes; i++){
        
        cin >> n;
        
        if(n!=1)
            wins++;
    }
    
    cout << wins << "\n";
    
}