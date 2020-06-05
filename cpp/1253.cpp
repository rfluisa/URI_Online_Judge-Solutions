//1253	Cifra de César	Accepted	C++	0.160	02/12/2019 02:30:50
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c;
    string frase;
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        
        cin >> frase;
        cin >> c;
        
        for(int j=0; j<frase.length(); j++){
            if(frase[j]-c < 'A')
                printf("%c",'Z'+1-(c-(frase[j]-'A')));
            else
                printf("%c",frase[j]-c);
        }
        
        cout << endl;
        
    }

    return 0;
}