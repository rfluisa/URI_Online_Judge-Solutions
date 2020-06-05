//2759	Entrada e Saída de Carácter	Accepted	C++	0.000	10/01/2019 22:01:48
#include <iostream>

using namespace std;

int main()
{
    char a, b, c;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    cout << "A = " << a << ", B = " << b << ", C = " << c << "\n";
    cout << "A = " << b << ", B = " << c << ", C = " << a << "\n";
    cout << "A = " << c << ", B = " << a << ", C = " << b << "\n";

    return 0;
}