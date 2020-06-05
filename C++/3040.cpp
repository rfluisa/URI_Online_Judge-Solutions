//3040	A Árvore de Natal	Accepted	C++	0.040	21/01/2020 02:28:52
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n, a, b, c;
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        
        cin >> a >> b >> c;
        
        if(a>=200 && a<=300 && b>=50 && c>=150)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;
    }

    return 0;
}