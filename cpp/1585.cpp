//1585	Fazendo Pandorgas	Accepted	C++	0.200	18/12/2019 18:44:51
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    
    double x, y;

    cin >> n;

    for(int i=0; i<n; i++){
        
        cin >> x >> y;
        
        cout << floor((x*y)/2) << " cm2" << endl;
    }


    return 0;
}