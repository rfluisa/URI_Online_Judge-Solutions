//2031	Pedra, Papel, Ataque Aéreo	Accepted	C++	0.008	18/12/2018 11:21:03
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tests, i=0;
    string p1,p2;
    
    cin >> tests;
    
    while(i<tests){
        
        cin >> p1 >> p2;
        
        if(!p1.compare("pedra")){
            if(!p2.compare("pedra"))
                cout << "Sem ganhador\n";
            else if(!p2.compare("papel"))
                cout << "Jogador 1 venceu\n";
            else if(!p2.compare("ataque"))
                cout << "Jogador 2 venceu\n";
        }else if(!p1.compare("papel")){
            if(!p2.compare("papel"))
                cout << "Ambos venceram\n";
            else 
                cout << "Jogador 2 venceu\n";
        }else if(!p1.compare("ataque")){
            if(!p2.compare("ataque"))
                cout << "Aniquilacao mutua\n";
            else
                cout << "Jogador 1 venceu\n";
        }
        i++;
    }
    
    return 0;
}