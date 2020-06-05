//1379	Problema com Mediana e Média	Accepted	C++	0.108	21/11/2019 21:25:34
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long a, b;
    
    while(true){
        
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        
        cout << (2*a) - b << endl;
        
        
    }
    

    return 0;
}