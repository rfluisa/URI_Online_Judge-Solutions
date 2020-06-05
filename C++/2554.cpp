//2554	Pizza Antes de BH	Accepted	C++	0.008	05/01/2019 12:33:42
#include <iostream>
#include <string>

using namespace std;

int main (){
    int aux, n, m, res=0, op=0;
    string data, dataf;
    
    while(cin >> n >> m){
        
        for(int i=0; i<m; i++){
            cin >> data;
            for(int j=0; j<n; j++){
                cin >> aux;
                if(aux == 1)
                    res++;
            }
            if(res == n && op == 0){
                dataf = data;
                op = 1;
            }
            res = 0;
        }
        
        if(dataf.length() > 0){
            cout << dataf << "\n";
            dataf = "";
        }
        else
            cout << "Pizza antes de FdI\n";
            
        op = 0;
    }
    return 0;
}