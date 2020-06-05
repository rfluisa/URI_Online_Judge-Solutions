//2783	Figurinhas da Copa	Accepted	C++	0.000	21/01/2019 01:11:31
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int carimbos[51];
    int n, c, m, figurinha, total;

    cin >> n >> c >> m;
    
    total = c;
    
    for(int i=0; i<c; i++)
        cin >> carimbos[i];
    
    for(int i=0; i<m; i++){
        cin >> figurinha;
        
        auto p = find(carimbos, carimbos+c, figurinha); 
        
        if(p != carimbos+c){
            total--;
            auto index = distance(carimbos, p);
            carimbos[index] = 0;
        }
    }
    
    cout << total << "\n";
    
    return 0;
}