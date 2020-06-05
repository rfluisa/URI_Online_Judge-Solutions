//2896	Aproveite a Oferta	Accepted	C++	0.012	02/12/2018 16:05:29
#include <iostream>

using namespace std;

int main ()
{
    int tests, n, k, i=0;

    cin >> tests;

    while(i < tests){

        cin >> n >> k;

        cout << n/k + n%k << "\n";

        i++;
    }

    return 0;
}