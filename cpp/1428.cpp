//1428	Procurando Nessy	Accepted	C++	0.144	13/11/2019 22:41:54
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, i=0;
    
    cin >> n;
    
    while(i<n){
        cin >> a >> b;
        
        if((a-1)%3 == 0)
            a--;
        else if((a-2)%3 == 0) 
            a-=2;
    
        if((b-1)%3 == 0)
            b--;
        else if((b-2)%3 == 0)
            b-=2;
        
        cout << (a*b)/9 << endl;
        i++;
    }

    return 0;
}