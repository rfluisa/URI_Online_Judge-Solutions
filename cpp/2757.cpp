//2757	Entrada e Saída de Número...	Accepted	C++	0.000	11/01/2019 00:08:13
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b, c;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
/*
  A = 1234, B = 12, C = 123
  A =       1234, B =         12, C =        123
  A = 0000001234, B = 0000000012, C = 0000000123
  A = 1234      , B = 12        , C = 123       
*/
    cout << "A = " << a << ", B = " << b << ", C = " << c << "\n";
    
    cout << "A = ";
    cout << setw(10) << a;
    cout << ", B = ";
    cout << setw(10) << b;
    cout << ", C = ";
    cout << setw(10) << c << "\n";
    
    cout << "A = ";
    if(a<0){
        cout << "-";
        cout << setfill('0') << setw(9) << abs(a);
    }else
        cout << setfill('0') << setw(10) << a;
    cout << ", B = ";
    cout << setw(10) << b;
    cout << ", C = ";
    cout << setw(10) << c << "\n";
    
    cout << setfill(' ');
    
    cout << "A = ";
    cout.width(10);
    cout << left << a;
    cout << ", B = ";
    cout.width(10);
    cout << left << b;
    cout << ", C = ";
    cout.width(10);
    cout << left << c << "\n";
    
    return 0;
}