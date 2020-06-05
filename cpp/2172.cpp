//2172	Evento	Accepted	C++	0.068	05/01/2019 22:37:48
#include <iostream>

using namespace std;

int main (){
    int n=1, m=1;
    
    while(n != 0 && m != 0){
        cin >> n >> m;
        if(m!= 0 && n!= 0)
            cout << n*m << "\n";
    }
    
    return 0;
}