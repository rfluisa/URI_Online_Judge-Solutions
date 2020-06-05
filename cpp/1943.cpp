//1943	Top N	Accepted	C++	0.000	21/11/2019 21:33:01
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    cout << "Top ";
    
    if(n<=100 && n>50)
        cout << 100 << endl;
    else if(n<=50 && n>25)
        cout << 50 << endl;
    else if(n<=25 && n>10)
        cout << 25 << endl;
    else if(n<=10 && n>5)
        cout << 10 << endl;
    else if(n<=5 && n>3)
        cout << 5 << endl;
    else if(n<=3 && n>1)
        cout << 3 << endl;
    else
        cout << 1 << endl;
    return 0;
}