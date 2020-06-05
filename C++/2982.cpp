//2982	A Greve para ou Continua?	Accepted	C++	0.108	02/12/2019 23:20:35
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a;
    int n, s, g=0, v=0;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> a >> s;
        
        if(a == 'V')
            v+=s;
        else
            g+=s;
    }
    
    if(v>=g)
        cout << "A greve vai parar." << endl;
    else
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
}