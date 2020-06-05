//2551	Novo Recorde	Accepted	C++	0.000	09/01/2019 01:22:40
#include <iostream>

using namespace std;

int main()
{
    int treinos;
    double  min, m, record = 1000000000, aux;
    
    while(cin >> treinos){
        
        for(int i=0; i<treinos; i++){
            cin >> min >> m;
            aux = (min*60)/(m*1000);
            if(aux < record){
                cout << i+1 << "\n";
                record = aux;
            }
        }
        record = 1000000000;
    }
    return 0;
}