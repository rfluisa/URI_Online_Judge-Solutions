//2721	Indecisão das Renas	Accepted	C++	0.000	20/02/2019 19:31:06
#include <iostream>

using namespace std;

int main()
{
    int n, res = 0;

    while(cin >> n){
        res += n;
    }

    res = res%9;
    //Dasher, Dancer, Prancer, Vixen, Comet, Cupid, Donner, Blitzen e Rudolph
    switch (res)
    {
        case 0:
            cout << "Rudolph\n";
            break;
        case 1:
            cout << "Dasher\n";
            break;
        case 2:
            cout << "Dancer\n";
            break;
        case 3:
            cout << "Prancer\n";
            break;
        case 4:
            cout << "Vixen\n";
            break;
        case 5:
            cout << "Comet\n";
            break;
        case 6:
            cout << "Cupid\n";
            break;
        case 7:
            cout << "Donner\n";
            break;
        case 8:
            cout << "Blitzen\n";
            break;    
    }

    return 0;
}
