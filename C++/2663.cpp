//2663	Fase	Accepted	C++	0.000	21/01/2019 18:27:28
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int rank[1000], n, m, pass;
    
    cin >> n;
    cin >> m;
    
    pass = m;
    
    for(int i=0; i<n; i++){
        cin >> rank[i];
    }
    
    sort(rank,rank+n, greater<int>());
    
    for(int i=m; i<n; i++){
        if(rank[i] == rank[i-1])
            pass++;
        else
            break;
    }
    
    cout << pass << "\n";
    
    return 0;
}