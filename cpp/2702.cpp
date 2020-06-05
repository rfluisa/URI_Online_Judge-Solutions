//2702	Escolha Difícil	Accepted	C++	0.000	20/12/2018 00:02:32
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, a1, b1, c1, res=0;
    
    cin >> a >> b >> c;
    cin >> a1 >> b1 >> c1;
    
    if(a1>a)
        res += a1-a;
    if(b1>b)
        res += b1-b;
    if(c1>c)
        res += c1-c;
        
    cout << res << "\n";

    return 0;
}