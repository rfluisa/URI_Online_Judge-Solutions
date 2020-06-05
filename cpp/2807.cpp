//2807	Iccanobif	Accepted	C++	0.000	04/01/2019 21:40:50
#include <iostream>

using namespace std;

int main (){
    unsigned int seq[40];
    int n;
    
    seq[0] = 1;
    seq[1] = 1;
    
    cin >> n;

    for (int i = 2; i < n; i++){
        seq[i] = seq[i-1] + seq[i-2];
    }
    
    for(int i=n-1; i>=0; i--){
        cout << seq[i];
        if(i==0)
            cout << "\n";
        else
            cout << " ";
    }

    return 0;
}