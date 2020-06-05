//2414	Desafio do Maior Número	Accepted	C++	0.000	22/11/2019 16:36:19
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, biggest;
    
    cin >> n;
    biggest = n;
    
    while(n != 0){
        cin >> n;
        if(n>biggest)
            biggest = n;
    }
    
    cout << biggest << endl;
    
    return 0;
}