//1024	Criptografia	Accepted	C++	0.244	31/10/2019 20:37:23
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n[10001];
    int i, j=0;
    
    cin >> i;
    
    while(j<=i){
        getline(cin,n[j]);
        
        for(int k=0; k<n[j].size(); k++){
            if(n[j][k] >= 'a' && n[j][k] <= 'z' || n[j][k] >= 'A' && n[j][k] <= 'Z')
                n[j][k] += 3;
        }
        
        reverse(n[j].begin(), n[j].end());
        
        for(int k=(n[j].size()/2); k<n[j].size(); k++){
            n[j][k] -= 1;
        }
        
        j++;
    }
    
    for(j=1; j<=i; j++)
        cout << n[j] << endl;

    return 0;
}