//2161	Raiz Quadrada de 10	Accepted	C++	0.000	24/11/2019 00:32:55
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i=0;
    double res = (1.0/6.0);
    
    cin >> n;
    
    if(n==0)
        res = 0;

    n-=2;
    
    while(i<=n){
        
        res = (6 + res);
        res = 1/res;
        
        i++;
    }
    res += 3;
    
    cout << fixed << setprecision(10) << res << endl;
    
    return 0;
}