//3088	Correção de Texto	Accepted	C++	0.000	19/05/2020 22:52:27
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string text;
    
    //cin.ignore();
    
    while (getline(cin, text)) {
        
        for (int i = 0; i < text.size(); ++i) {
            if (!(text[i] == ' ' && ((i+1) < text.size() && (text[i + 1] == ',' || text[i + 1] == '.') ))) {
                cout << text[i];
            }
        }
        cout << endl;
        
    }
    
    return 0;
}