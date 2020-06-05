//2884	Interruptores	Accepted	C++	0.360	01/05/2019 18:36:01
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, l, count = 0, aux;
    int inicial[1000];
    int testes[1000];
    int matriz[1000][1000];
    
    cin >> n >> m; // n=interruptores, m=lampadas
    cin >> l;
    
    for(int i=0; i<m; i++){
        inicial[i] = 0;
        testes[i] = 0;
        for(int j=0; j<n; j++)
            matriz[j][i] = 0;
    }
    
    for(int i=0; i<l; i++){
        cin >> aux;
        inicial[aux-1] = 1;
        testes[aux-1] = 1;
    }
    
    for(int i=0; i<n; i++){
        cin >> aux;
        for (int j=0; j<aux; j++){
            cin >> l;
            matriz[i][l-1] = 1;
        }
    }
    
    
    
    
    for(int i=0; i<n; i++){
        
        if(count != 0 && i == 0){
            if(equal(begin(inicial), end(inicial), begin(testes))){
                cout << "-1\n";
                break;
            }
        }
        
        count++;
        
        for (int j=0; j<m; j++){
            testes[j]+=matriz[i][j];
            if(testes[j] == 2)
                testes[j] = 0;
        }
        aux = 0;
        
        for(int k=0; k<m; k++){
            aux += testes[k];
        }
        
        if(aux == 0){
            cout << count << "\n";
            break;
        }
        if(i==n-1)
            i=-1;
    }
    
    
    return 0;
}