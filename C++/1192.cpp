//1192	O jogo Matemático de Paula	Accepted	C++	0.208	12/11/2019 20:44:40
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, testes;
    char a;
    
    cin >> testes;
    
    for(int i=0; i<testes; i++){
        cin >> n >> a >> m;
        
        if(n == m)
            cout << n*m << endl;
        else if(a>='a' && a<='z')
            cout << m+n << endl;
        else if(a>='A' && a<='Z')
            cout << m-n << endl;
    }

    return 0;
}