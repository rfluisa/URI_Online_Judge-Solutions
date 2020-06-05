//1214	Acima da Média	Accepted	C++	0.244	05/01/2019 23:08:57
#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int tests, n, grade[1000];
    double av=0, above=0;
    
    cin >> tests;
    
    for(int i=0; i<tests; i++){
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> grade[j];
            av += grade[j];
        }
        av/=n;
        for(int j=0; j<n; j++){
            if(grade[j] > av)
                above++;
        }
        
        cout << fixed << setprecision(3) << above * 100 / n << "%\n";
        above = 0;
        av = 0;
    }   
    
    return 0;
}