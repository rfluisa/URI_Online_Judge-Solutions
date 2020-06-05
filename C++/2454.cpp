//2454	Flíper	Accepted	C++	0.000	24/11/2019 00:44:39
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    
    cin >> m >> n;
    
    if(m == 0)
        cout << "C" << endl;
    else if(n == 1)
        cout << "A" << endl;
    else
        cout << "B" << endl;
    
    return 0;
}