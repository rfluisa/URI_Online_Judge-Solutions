//1743	Máquina de Verificação Au...	Accepted	C++	0.000	16/11/2019 17:38:32
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p1[5], p2[5];
    
    cin >> p1[0] >> p1[1] >> p1[2] >> p1[3] >> p1[4];
    cin >> p2[0] >> p2[1] >> p2[2] >> p2[3] >> p2[4];
    
    if(p1[0] != p2[0] && p1[1] != p2[1] && p1[2] != p2[2] && p1[3] != p2[3] && p1[4] != p2[4])
        cout << "Y" << endl;
    else
        cout << "N" << endl;

    return 0;
}