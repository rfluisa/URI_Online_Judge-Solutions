//1257	Array Hash	Accepted	C++	0.104	12/11/2019 20:37:21
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int testes,n, sum=0;
    
    cin >> testes;
    
    for(int i=0; i<testes; i++){
        cin >> n;
        
        for(int j=0; j<n; j++){
            cin >> s;
            
            int k=0;
            
            while(s[k] != '\0'){
                sum += (s[k]-65) + k + j;
                k++;
            }
            
        }
        
        cout << sum << endl;
        
        sum = 0;
        
    }
    

    return 0;
}