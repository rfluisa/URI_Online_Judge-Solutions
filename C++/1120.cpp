//1120	Revisão de Contrato	Accepted	C++	0.004	31/10/2019 20:59:01
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    char n;
    string s;
    
    while(1==1){
        
        cin >> n >> s;
        
        if(s == "0" && n == '0')
            break;
        
        s.erase(remove(s.begin(), s.end(), n), s.end());
        s.erase(0, min(s.find_first_not_of('0'), s.size()-1));
        if(s == "")
            cout << "0" << endl;
        else
            cout << s << endl;
    }
    
    
    
    return 0;
}