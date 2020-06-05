//2377	Pedágio	Accepted	C++	0.000	16/11/2019 17:26:18
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, d, k, p;
    
    cin >> l >> d;
    cin >> k >> p;
    
    cout << (l/d)*p + k*l << endl;

    return 0;
}