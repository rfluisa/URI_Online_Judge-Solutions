//2375	Sedex	Accepted	C++	0.000	22/11/2019 16:29:04
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d, a, b, c;
    
    cin >> d;
    cin >> a >> b >> c;
    
    if(d<=a && d<=b && d<=c)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}