//1960	Numeração Romana para Núm...	Accepted	C++	0.000	19/10/2018 17:48:50

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int n, c, d, u;
    
    cin >> n;
    
    u = n%10;
    d = n%100 - u;
    c = n - (n%100);
    
    if(c!=0)
        switch(c){
        case 100:
            cout << "C";
            break;
        case 200:
            cout << "CC";
            break;
        case 300:
            cout << "CCC";
            break;
        case 400:
            cout << "CD";
            break;
        case 500:
            cout << "D";
            break;
        case 600:
            cout << "DC";
            break;
        case 700:
            cout << "DCC";
            break;
        case 800:
            cout << "DCCC";
            break;
        case 900:
            cout << "CM";
            break;
        }
    
    if(d!=0)
        switch(d){
        case 10:
            cout << "X";
            break;
        case 20:
            cout << "XX";
            break;
        case 30:
            cout << "XXX";
            break;
        case 40:
            cout << "XL";
            break;
        case 50:
            cout << "L";
            break;
        case 60:
            cout << "LX";
            break;
        case 70:
            cout << "LXX";
            break;
        case 80:
            cout << "LXXX";
            break;
        case 90:
            cout << "XC";
            break;
        }
    
    if(u!=0)
        switch(u){
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
            break;
        case 4:
            cout << "IV";
            break;
        case 5:
            cout << "V";
            break;
        case 6:
            cout << "VI";
            break;
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "VIII";
            break;
        case 9:
            cout << "IX";
            break;
        }
    
    cout << "\n";
}
