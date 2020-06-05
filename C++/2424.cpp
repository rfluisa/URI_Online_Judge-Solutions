//2424	Tira-teima	Accepted	C++	0.000	21/11/2019 18:05:16
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    
    cin >> x >> y;
    
    if(x>=0 && x<=432 && y>=0 && y<=468)
        cout << "dentro" << endl;
    else
        cout << "fora" << endl;
    
    return 0;
}