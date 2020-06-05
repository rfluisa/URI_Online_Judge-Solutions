//2373	Garçom	Accepted	C++	0.000	16/10/2019 08:01:08
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, res = 0;
    
    cin >> n;

    while(cin >> n >> m){
        if(n > m)
            res += m;
    }
    
    cout << res << endl;

    return 0;
}