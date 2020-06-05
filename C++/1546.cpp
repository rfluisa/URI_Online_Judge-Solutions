//1546	Feedback	Accepted	C++	0.104	19/12/2019 22:15:21
#include <bits/stdc++.h>

using namespace std;

int main(){

    string nomes[] = {"Rolien", "Naej", "Elehcim", "Odranoel"};

    int aux, n, t, j=0;

    cin >> t;

    while(j<t){
        
        cin >> n;

        for(int i=0; i<n; i++){
            cin >> aux;
            cout << nomes[aux-1] << endl;
        }

        j++;

    }

    return 0;
}