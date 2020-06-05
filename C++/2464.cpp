//2464	Decifra	Accepted	C++	0.000	12/11/2019 21:04:13
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //a = 97
    string cripto, frase;
    int i=0;
    
    cin >> cripto;
    cin >> frase;
    
    while(frase[i] != '\0'){
        
        cout << cripto[(frase[i]-97)];
        
        i++;
    }
    cout << endl;
    
    return 0;
}