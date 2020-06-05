//2143	A Volta do Radar	Accepted	C++	0.000	20/01/2019 03:59:47
#include <iostream>

using namespace std;

int main()
{
    int n=1, aux;
    
    while(n != 0){
        
        cin >> n;
        
        if(n != 0){
            
            for(int i=0; i<n; i++){
                cin >> aux;
                
                if(aux%2 == 0)
                    cout << ((aux-2)*2 )+ 2 << "\n";
                else
                    cout << ((aux-1)*2) + 1 << "\n";
            }
        }
    }
    
    return 0;
}