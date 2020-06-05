//2310	Voleibol	Accepted	C++	0.000	09/12/2018 00:49:58
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int tests, s, b, a, s1, b1, a1, i=0;
    double stot=0, btot=0, atot=0, s1tot=0, b1tot=0, a1tot=0;
    string nome;
    
    cin >> tests;
    
    while(i<tests){
        
        cin >> nome;
        cin >> s >> b >> a;
        cin >> s1 >> b1 >> a1;
        
        stot += s;
        btot += b;
        atot += a;
        s1tot += s1;
        b1tot += b1;
        a1tot += a1;
        
        i++;
    }
    
    cout << "Pontos de Saque: " << fixed << setprecision(2) << (s1tot * 100)/stot << " %.\n";
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << (b1tot * 100)/btot << " %.\n";
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << (a1tot * 100)/atot << " %.\n";
    

    return 0;
}