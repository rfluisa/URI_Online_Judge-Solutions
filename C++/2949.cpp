//2949	A Sociedade do Anel	Accepted	C++	0.000	24/10/2019 13:38:26
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h=0, hu=0, e=0, a=0, m=0, i;
    char nome[150], tipo;
    
    cin >> i;
    
    while(i>0){
        
        cin >> nome >> tipo;
        
        if(tipo == 'A')
            a++;
        else if(tipo == 'E')
            e++;
        else if(tipo == 'H')
            hu++;
        else if(tipo == 'M')
            m++;
        else
            h++;
        
        i--;
    }
    
    
    
    
    cout << h << " Hobbit(s)"<< endl;
    cout << hu << " Humano(s)"<< endl;
    cout << e << " Elfo(s)"<< endl;
    cout << a << " Anao(s)"<< endl;
    cout << m << " Mago(s)"<< endl;

    return 0;
}