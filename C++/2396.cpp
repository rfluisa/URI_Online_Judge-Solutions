//2396	Corrida	Accepted	C++	0.008	26/02/2020 21:33:27
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> mapa;
    int n, m, tot=0, aux;
    
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            
            cin >> aux;
            tot += aux;
            
        }
        
        mapa.insert(pair<int,int>(tot, i+1));
        
        tot = 0;
        
    }
    
    map<int,int>::iterator it = mapa.begin();
    
    cout << it++->second << endl;
    cout << it++->second << endl;
    cout << it->second << endl;
    
    
    
    return 0;
}