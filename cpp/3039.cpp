//3039	Brinquedos do Papai Noel	Accepted	C++	0.000	03/06/2020 16:14:25
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, f=0, m=0;
    string str;
    
    cin >> n;
    cin.ignore();
    
    for(int i=0; i<n; i++)
    {
        getline(cin,str);
        
        int pos = str.size();
        
        if(str[pos-1] == 'F')
            f++;
        else
            m++;
    }
    
    cout << m << " carrinhos" << endl;
    cout << f << " bonecas" << endl;

    return 0;
}