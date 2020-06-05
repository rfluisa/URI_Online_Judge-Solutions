//2057	Fuso Horário	Accepted	C++	0.000	18/12/2018 11:43:22
#include <iostream>

using namespace std;

int main()
{
    int s, t, f;
    
    cin >> s >> t >> f;
        
    s += (t+f);
    
    if(s >= 24)
        cout << s-24 << "\n";
    else if(s<0)
        cout << s+24 << "\n";
    else
        cout << s << "\n";
    
    return 0;
}