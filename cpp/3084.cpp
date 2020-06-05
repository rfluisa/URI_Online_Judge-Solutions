//3084	Relógio Antigo	Accepted	C++	0.008	19/05/2020 22:40:14
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int h, m;
    
    while(cin >> h >> m){
        h/=30;
        m/=6;
        
        
        printf("%02d:%02d\n", h, m);
    }
    
    return 0;
}