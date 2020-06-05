//2388	Tacógrafo	Accepted	C++	0.004	21/11/2019 16:38:31
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i=0, v, t, s=0;
    
    cin >> n;
    
    while(i<n){
        cin >> v >> t;
        
        s += v*t;
        
        i++;
        
    }

    cout << s << endl;
    
    return 0;
}