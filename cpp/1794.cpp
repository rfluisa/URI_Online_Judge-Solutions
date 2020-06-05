//1794	Lavanderia	Accepted	C++	0.000	27/10/2019 16:31:00
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n, la, lb, sa, sb;
    
    cin >> n >> la >> lb >> sa >> sb;
    
    if(n >= la && n <=lb && n>= sa && n<= sb)
        cout << "possivel" << endl;
    else
        cout << "impossivel" << endl;
    
    return  0;
}