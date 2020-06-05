//1796	Economia Brasileira	Accepted	C++	0.028	21/01/2020 01:45:49
#include <bits/stdc++.h>

using namespace std;

int main(){
    int op, s=0, n=0;
    float q;

    scanf("%f", &q);

    for(int i=0; i<q; i++){
        scanf("%d", &op);

        s += op;
    }

    if(s >= q/2)
        cout << "N" << endl;
    else
        cout << "Y" << endl;
        
    return 0;
}