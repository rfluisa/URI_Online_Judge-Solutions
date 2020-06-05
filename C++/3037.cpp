//3037	Jogando dardos por distância	Accepted	C++	0.000	26/05/2020 22:42:15
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, j=0, m=0, aux1, aux2;
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        
        for(int k=0; k<3; k++){
            cin >> aux1 >> aux2;
            j += aux1 * aux2;
        }
        for(int k=0; k<3; k++){
            cin >> aux1 >> aux2;
            m += aux1 * aux2;
        }
        
        if(j>m)
            cout << "JOAO" << endl;
        else
            cout << "MARIA" << endl;
        
        j=0;
        m=0;
    }

    return 0;
}