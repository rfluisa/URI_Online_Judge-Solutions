//2344	Notas da Prova	Accepted	C++	0.000	28/10/2019 23:52:19
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    if(n>=86 && n<=100)
        cout << "A" << endl;
    else if(n>=61 && n<=85)
        cout << "B" << endl;
    else if(n>=36 && n<=60)
        cout << "C" << endl;
    else if(n>=1 && n<=35)
        cout << "D" << endl;
    else
        cout << "E" << endl;

    return 0;
}