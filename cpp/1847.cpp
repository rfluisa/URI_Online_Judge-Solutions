//1847	Bem-vindos e Bem-vindas a...	Accepted	C++	0.000	05/12/2018 17:47:36
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    int t1, t2, t3;

    cin >> t1 >> t2 >> t3;

    if(t1 > t2 && t2 <= t3)
        cout << ":)\n";
    else if(t1<t2 && t2>=t3)
        cout << ":(\n";
    else if(t1<t2 && t2<t3 && t3-t2<t2-t1)
        cout << ":(\n";
    else if(t1<t2 && t2<t3 && t3-t2>=t1-t2)
        cout << ":)\n";
    else if(t1>t2 && t2>t3 && t2-t3<t1-t2)
        cout << ":)\n";
    else if(t1>t2 && t2>t3 && t2-t3>=t1-t2)
        cout << ":(\n";
    else if(t1 == t2 && t2<t3)
        cout << ":)\n";
    else if(t1 == t2 && t2>t3)
        cout << ":(\n";
    else
        cout << ":(\n";


    return 0;
}