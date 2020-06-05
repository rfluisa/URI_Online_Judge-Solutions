//2533	Estágio	Accepted	C++	0.000	08/01/2019 23:50:10
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, n1, c1;
    double notas=0, horas=0;
    
    while(cin >> n){
        
        for(int i=0; i<n; i++){
            cin >> n1 >> c1;
            notas += n1*c1;
            horas += c1;
        }
        
        cout << fixed << setprecision(4) << notas/(horas*100) << "\n";
        notas = 0;
        horas = 0;
    }
    return 0;
}