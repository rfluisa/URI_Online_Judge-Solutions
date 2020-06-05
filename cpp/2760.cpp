//2760	Entrada e Saída de String	Accepted	C++	0.000	14/01/2019 18:58:55
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[150], b[150], c[150];
    
    scanf(" %[^\n]", a);
    scanf(" %[^\n]", b);
    scanf(" %[^\n]", c);
    
    cout << a << b << c << "\n";
    cout << b << c << a << "\n";
    cout << c << a << b << "\n";
    
    for(int i=0; i<10; i++)
        if(i < strlen(a))
            cout << a[i];
    for(int i=0; i<10; i++)
        if(i < strlen(b))
            cout << b[i];
    for(int i=0; i<10; i++)
        if(i < strlen(c))
            cout << c[i];
    cout << "\n";

    return 0;
}
