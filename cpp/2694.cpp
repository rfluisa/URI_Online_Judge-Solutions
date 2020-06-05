//2694	Problema com a Calculadora	Accepted	C++	0.140	21/11/2019 16:59:56
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string teste;
    int n, k=0;
    
    cin >> n;
    
    while(k<n){
        
        cin >> teste;
        
        int i=0, flagL=0, flagT=0, res=0;
        string n1, n2, n3;
        
        while(i < teste.size()){
            
            if(teste[i]>='0' && teste[i]<='9'){
                if(flagL == 0)
                    n1.push_back(teste[i]);
                else if(flagL == 1)
                    n2.push_back(teste[i]);
                else
                    n3.push_back(teste[i]);
                
                flagT = 1;
            }else if(flagT == 1)
                flagL++;
                
            i++;
        }
        
        res += stoi(n1) + stoi(n2) + stoi(n3);
        
        cout << res << endl;
        
        k++;
    }
    
    
    
    return 0;
}