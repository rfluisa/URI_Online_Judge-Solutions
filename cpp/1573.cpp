//1573	Fábrica de Chocolate	Accepted	C++17	0.032	22/11/2019 16:19:36
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=1, b=1, c=1;
    
    while(true){
        
        cin >> a >> b >> c;
        
        if(a==0 && b==0 && c==0)
            break;
        
        cout << floor(cbrt(a*b*c)) << endl;
    }
    

    return 0;
}