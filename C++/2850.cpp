//2850	Papagaio Poliglota	Accepted	C++	0.000	13/05/2019 23:54:03
#include <bits/stdc++.h>

using namespace std;


int main()
{
    string var;
    while(cin>>var){
        if(var == "esquerda")
            cout << "ingles\n";
        else if(var == "direita")
            cout << "frances\n";
        else if(var == "nenhuma")
            cout << "portugues\n";
        else if(var == "as")
            cout << "caiu\n";
    }

    return 0;
}
