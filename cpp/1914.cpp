//1914	De Quem é a Vez?	Accepted	C++	0.000	19/10/2018 17:25:53
#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int a, b, testes;
    string nome1, escolha1, nome2, escolha2;
    
    cin >> testes;
    
    for(int i=0; i<testes; i++){
        
        cin >> nome1 >> escolha1 >> nome2 >> escolha2;
        
        cin >> a >> b;
        
        if((a+b)%2 == 0){
            if(!escolha1.compare("PAR"))
                cout << nome1 << "\n";
            else
                cout << nome2 << "\n";
        }else{
            if(!escolha1.compare("IMPAR"))
                cout << nome1 << "\n";
            else
                cout << nome2 << "\n";
        }
        
    }
    
}