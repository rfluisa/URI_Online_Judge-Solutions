//2417	Campeonato	Accepted	C++	0.000	23/11/2019 23:44:33
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Cv, Ce, Cs, Fv, Fe, Fs;
    
    cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;
    
    Cv *= 3;
    Cv += Ce;
    
    Fv *= 3;
    Fv += Fe;
    
    if(Cv > Fv)
        cout << "C" << endl;
    else if(Cv < Fv)
        cout << "F" << endl;
    else if(Cs > Fs)
        cout << "C" << endl;
    else if(Cs < Fs)
        cout << "F" << endl;
    else
        cout << "=" << endl;

    return 0;
}