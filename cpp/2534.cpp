//2534	Exame Geral	Accepted	C++	0.000	09/01/2019 00:10:44
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, q, notas[100], aux;
    
    while(cin >> n >> q){
        
        for(int i=0; i<n; i++)
            cin >> notas[i];
        
        sort(notas, notas+n, greater<int>());
        
        for(int i=0; i<q; i++){
            cin >> aux;
            cout << notas[aux-1] << "\n";
        }
    }
    
    return 0;
}