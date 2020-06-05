//2175	Qual o Mais Rápido?	Accepted	C++	0.000	18/01/2020 16:03:23
#include <bits/stdc++.h>

using namespace std;

int main(){

    float a, b, c;

    cin >> a >> b >> c;

    if(a<b && b<=c || a<c && c<=b)
        cout << "Otavio" << endl;
    else if(b<a && a<=c || b<c && c<=a)
        cout << "Bruno" << endl;
    else if(c<b && b<=a || c<a && a<=b)
        cout << "Ian" << endl;
    else
        cout << "Empate" << endl;
    
    return 0;
}