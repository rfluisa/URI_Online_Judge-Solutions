//2862	Inseto!	Accepted	C++	0.000	02/12/2018 16:11:07
#include <iostream>

using namespace std;

int main ()
{
    int tests, n, i=0;

    cin >> tests;

    while(i < tests){

        cin >> n;

        if(n<=8000)
            cout << "Inseto!\n";
        else
            cout << "Mais de 8000!\n";

        i++;
    }

    return 0;
}