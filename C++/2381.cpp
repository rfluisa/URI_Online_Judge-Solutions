//2381	Lista de Chamada	Accepted	C++	0.000	12/11/2019 20:55:21
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> nomes;
    string name;
    
    int n, k;
    
    cin >> n >> k;
    
    for(int i=0; i<n; i++){
        cin >> name;
        nomes.push_back(name);
    }
    
    sort(nomes.begin(), nomes.end());
    
    cout << nomes.at(k-1) << endl;
    
    
    return 0;
}
