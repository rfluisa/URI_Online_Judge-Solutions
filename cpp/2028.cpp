//2028	Sequência de Sequência	Accepted	C++	0.512	17/12/2018 16:46:34
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string seq;
    int n, k=0, test=1;
    
    while(cin >> n){
        
        seq = "";
        
        for(int i=0; i<n; i++){
            if(i==0){
                seq+=to_string(0)+" ";
                k++;
            }
            for(int j=0; j<=i; j++){
                if(j==n-1)
                    seq+=to_string(i+1)+"\n";
                else
                    seq+=to_string(i+1)+" ";
                k++;
            }
        }
        
        if(n == 0)
            cout << "Caso " << test++ << ": 1 numero\n0\n\n";
        else{
            cout << "Caso " << test++ << ": " << k << " numeros\n";
            cout << seq << "\n";
        }
        
        k=0;
    }
    
    return 0;
}