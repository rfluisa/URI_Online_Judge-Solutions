//2633	Churras no Yuri	Accepted	C++	0.000	14/01/2019 21:27:03
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    string aux;
    int n, p;
    
    while(cin >> n){
        
        map<int, string> lista;
        
        for(int i=0; i<n; i++){
            cin >> aux >> p;
            lista[p] = aux;
        }
        
        int i=0;
        
        for(auto const & item : lista){
            cout << item.second;
            if(i == n-1)
                cout << "\n";
            else
                cout << " ";
            i++;
        }
        
    }
    
    

    return 0;
}
