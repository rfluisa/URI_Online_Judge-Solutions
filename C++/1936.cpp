//1936	Fatorial	Accepted	C++	0.000	21/11/2019 20:00:23
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, res=0;
    
    int fact[8] = {1, 2, 6, 24, 120, 720, 5040, 40320};
    
    scanf("%i", &n);
    
    while(n != 0){
        
        for(int i=7; i>=0; i--)
            if(fact[i]<=n){
                res++;
                n -= fact[i];
                break;
            }
    }
    
    cout << res << endl;
    
    

    return 0;
}