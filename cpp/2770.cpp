//2770	Tamanho da Placa	Accepted	C++	0.640	19/04/2019 01:57:20
#include <iostream>

using namespace std;

int main()
{
    long m1, m2, n, t1, t2;
    
    while(cin >> m1 >> m2 >> n){
        
        for(int i=0; i<n; i++){
            cin >> t1 >> t2;
            if(t1*t2 <= m1*m2 && ((t1<=m1 && t2<=m2) || (t2<=m1 && t1<=m2)))
                cout << "Sim\n";
            else
                cout << "Nao\n";
        }
        
    }

    return 0;
}
