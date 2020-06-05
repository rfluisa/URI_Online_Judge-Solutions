//2455	Gangorra	Accepted	C++	0.000	11/11/2019 19:54:28
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c1, p1, c2, p2;
    
    cin >> c1 >> p1 >> c2 >> p2;
    
    if(c1*p1 == c2*p2)
        cout << "0" << endl;
    else if(c1*p1 > c2*p2)
        cout << "-1" << endl;
    else
        cout << "1" << endl;
    return 0;
}