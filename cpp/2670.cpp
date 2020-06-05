//2670	Máquina de Café	Accepted	C++	0.000	04/01/2019 23:10:00
#include <iostream>

using namespace std;

int main (){
    int a, b, c, res1, res2, res3;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    res1 = (b * 2) + (c * 4);
    res2 = (a * 2) + (c * 2);
    res3 = (b * 2) + (a * 4);
    
    if(res1 >= res2){
        if(res2 > res3)
            cout << res3 << "\n";
        else
            cout << res2 << "\n";
    }else{
        if(res1 > res3)
            cout << res3 << "\n";
        else
            cout << res1 << "\n";
    }
    
    return 0;
}