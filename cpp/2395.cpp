//2395	Transporte de Contêineres	Accepted	C++	0.000	26/02/2020 21:12:12
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, x, y, z;
    
    cin >> a >> b >> c;
    cin >> x >> y >> z;
    
    cout << (x/a)*(y/b)*(z/c) << endl;
    

    return 0;
}