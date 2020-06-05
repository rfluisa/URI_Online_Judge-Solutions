//2963	Bobo da Corte	Accepted	C++	0.004	21/11/2019 15:42:59
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testes, i=1, carlos, aux;
    
    cin >> testes;
    cin >> carlos;
    while(i<testes){
        
        cin>>aux;
        
        if(aux>carlos)
            carlos = -1;
        
        i++;
    }
    
    if(carlos != -1)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    

    return 0;
}