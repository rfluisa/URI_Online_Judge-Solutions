//2166	Raiz Quadrada de 2	Accepted	C++	0.000	24/11/2019 00:27:15
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i=0;
    double res = 0.5;
    
    cin >> n;

    if(n==0)
        res = 0;

    n-=2;
    
    while(i<=n){
        
        res = (2 + res);
        res = 1/res;
        
        i++;
    }
    res += 1;
    
    cout << fixed << setprecision(10) << res << endl;
    
    return 0;
}