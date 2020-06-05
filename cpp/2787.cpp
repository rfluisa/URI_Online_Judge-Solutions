//2787	Xadrez	Accepted	C++	0.000	19/12/2018 23:55:02
#include <iostream>

using namespace std;

int main()
{
    int l, c;
    
    cin >> l >> c;
    
    if((l%2==0 && c%2==0) || (l%2!=0 && c%2!=0))
        cout << "1\n";
    else
        cout << "0\n";

    return 0;
}