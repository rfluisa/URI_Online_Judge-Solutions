//2473	Loteria	Accepted	C++	0.000	21/11/2019 17:10:42
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int aux, sorteio[6], res=0;
    
    for(int i=0; i<6; i++)
        cin >> sorteio[i];
    for(int i=0; i<6; i++){
        cin >> aux;
        for(int j=0; j<6; j++){
            if(aux == sorteio[j])
                res++;
        }
    }
    
    switch(res){
        case 0:
        case 1:
        case 2:
            cout << "azar" << endl;
            break;
        case 3:
            cout << "terno" << endl;
            break;
        case 4:
            cout << "quadra" << endl;
            break;
        case 5:
            cout << "quina" << endl;
            break;
        case 6:
            cout << "sena" << endl;
            break;
    }
    
    
    return 0;
}