//2061	As Abas de Péricles	Accepted	C++	0.000	18/12/2018 11:53:31
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int abas, acoes, i=0;
    string a;
    
    cin >> abas >> acoes;
    
    while(i<acoes){
        
        cin >> a;
        
        if(!a.compare("fechou"))
            abas++;
        else if(!a.compare("clicou"))
            abas--;
        i++;
    }
    cout << abas << "\n";
    return 0;
}