//2782	Escadinha	Accepted	C++	0.000	14/12/2019 18:26:45
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, prev, inc=0;
    int vec[1001];
    
    cin >> n;
    
    for(int i=0; i<n; i++)
        cin >> vec[i];
    
    prev = vec[1]-vec[0];
    
    
    if(n<3)
        cout << "1" << endl;
    else{
        for(int i=1; i<n; i++){
            if(vec[i]-vec[i-1] != prev)
                inc++;
                
            prev = vec[i]-vec[i-1];
        }
        cout << inc+1 << endl;
    }
    

    return 0;
}