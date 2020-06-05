//2951	O Retorno do Rei	Accepted	C++	0.000	02/12/2019 22:59:42
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, g, aux1, res=0;
    char aux2;
    map<char, int> mapa;
    
    cin >> n >> g;
    
    for(int i=0; i<n; i++){
        cin >> aux2 >> aux1;
        mapa.insert(pair<char,int>(aux2,aux1));
    }
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> aux2;
        res += mapa[aux2];
    }
    
    cout << res << endl;
    
    if(res >= g)
        cout << "You shall pass!" << endl;
    else
        cout << "My precioooous" << endl;

    return 0;
}