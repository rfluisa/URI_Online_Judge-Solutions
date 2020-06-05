//2006	Identificando o Chá	Accepted	C++	0.000	12/12/2018 04:09:57
#include <iostream>

using namespace std;

int main()
{
    int type, correct = 0, aux;
    
    cin >> type;
    
    for(int i=0; i<5; i++){
        cin >> aux;
        if(aux == type)
            correct++;
    }
    
    cout << correct << "\n";
    
    
    return 0;
}