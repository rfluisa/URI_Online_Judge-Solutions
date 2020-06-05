//1429	Fatorial de Novo!	Accepted	C++	0.600	16/10/2019 08:29:58
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=1, res=0, fact=1;
    
    while(cin >> n){
        
        if(n == 0)
            break;
        
        for(int i=1; i<=5; i++){
            fact*=i;
            
            if(n%10 != 0)
                res += (n%10)*fact;
            n = n/10;
        }
        
        cout << res << endl;
        res = 0;
        fact = 1;
    }
    
    

    return 0;
}