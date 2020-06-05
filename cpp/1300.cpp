//1300	Horas e Minutos	Accepted	C++	0.124	18/01/2020 17:10:08
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;

    while(cin >> a){
        if(a%6 == 0)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}