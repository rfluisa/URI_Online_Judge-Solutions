//1250	KiloMan	Accepted	C++	0.164	21/11/2019 18:44:27
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, i=0;
    string pulos, tiros;
    cin >> n;
    
    while(i<n){
        
        int tiros[50];
        string pulos;
        int hits=0;
        
        cin >> t;
        
        for(int j=0; j<t; j++)
            cin >> tiros[j]; 
        
        cin >> pulos;
        for(int j=0; j<t; j++){
            
            if(pulos[j] == 'S')
                if(tiros[j] <= 2)
                    hits++;
            if(pulos[j] == 'J')
                if(tiros[j] > 2)
                    hits++;
        }
        
        cout << hits << endl;
        
        i++;
    }
    
    
    return 0;
}