//2761	Entrada e Saída de Vários...	Accepted	C++	0.000	14/01/2019 19:21:26
#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    float b;
    char c, d[100];
    
    cin >> a >> b >> c;
    scanf(" %[^\n]", &d);
    
    cout << a ;
    cout << fixed << setprecision(6) << b;
    cout << c << d << "\n";
    cout << a << "\t" << b << "\t" << c << "\t" << d << "\n";
    cout << setw(10) << a;
    cout << setw(10) << b;
    cout << setw(10) << c;
    cout << setw(10) << d << "\n";

    return 0;
}