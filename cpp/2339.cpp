//2339	Aviões de Papel	Accepted	C++	0.000	11/11/2019 20:00:38
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, p, f;
    
    cin >> c  >> p >> f;
    
    if(c*f <= p)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    
    
    return 0;
}