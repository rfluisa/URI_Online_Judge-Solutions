//2685	A Mudança	Accepted	C++	0.000	02/06/2020 23:35:37
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    while(cin>>n){
        
        if((n>=0 && n<90) || n == 360)
            cout << "Bom Dia!!" << endl;
        else if(n>=90 && n<180)
            cout << "Boa Tarde!!" << endl;
        else if(n>=180 && n<270)
            cout << "Boa Noite!!" << endl;
        else
            cout << "De Madrugada!!"<< endl;
    }

    return 0;
}