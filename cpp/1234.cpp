//1234	Sentença Dançante	Accepted	C++	0.108	31/10/2019 21:30:22
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    int cFlag = 1;
    
    while(getline(cin, s)){
        
        for(int i=0; i<s.size(); i++){
            
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
                if(cFlag == 1){
                    
                    if(s[i]>='a' && s[i]<='z')
                        cout << char(s[i]-32);
                    else
                        cout << s[i];
                    
                    cFlag = 0;
                }else{
                
                    if(s[i]>='A' && s[i]<='Z')
                        cout << char(s[i]+32);
                    else
                        cout << s[i];
                    cFlag = 1;
                }
            }else
                cout << s[i];
        }
        
        cFlag = 1;
        cout << endl;
        
    }
    
    return 0;
}