//2880	Enigma	Accepted	C++	0.004	03/05/2019 01:33:09
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome, crib;
    //char nome[10000];
    //char crib[10000];
    int len, lenc;
    bool a=false;
    int aux = 0;
    int count = 0;
    
    cin >> nome;
    cin >> crib;
    
    len = nome.size();
    lenc = crib.size();
    
    //len = strlen(nome);
    //lenc = strlen(crib);
    
    while(aux+lenc <= len){
        for(int i=aux, j=0; i<len, j<lenc; i++, j++){
            if(nome[i] == crib[j]){
                a = true;
                break;
            }
        }
        if(!a){
            count++;
        }
        
        a = false;
        aux++;
    }
    
    cout << count << "\n";
    
    return 0;
}