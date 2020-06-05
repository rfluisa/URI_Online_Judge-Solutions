//2139	Natal de Pedrinho	Accepted	C++	0.000	18/12/2018 13:11:41
#include <iostream>

using namespace std;

int main()
{
    int dia, mes, diascorridos;
    
    while(cin >> mes >> dia){
        /*
        1, 3, 5, 7, 8, 10, 12 = 31
        2 = 29
        4, 6, 9, 11 = 30
        */
        
        if(mes == 1)
            diascorridos = dia;
        else if(mes == 2)
            diascorridos = dia + 31;
        else if(mes == 3)
            diascorridos = dia + 60;
        else if(mes == 4)
            diascorridos = dia + 91;
        else if(mes == 5)
            diascorridos = dia + 121;
        else if(mes == 6)
            diascorridos = dia + 152;
        else if(mes == 7)
            diascorridos = dia + 182;
        else if(mes == 8)
            diascorridos = dia + 213;
        else if(mes == 9)
            diascorridos = dia + 244;
        else if(mes == 10)
            diascorridos = dia + 274;
        else if(mes == 11)
            diascorridos = dia + 305;
        else
            diascorridos = dia + 335;
            
        if(diascorridos < 359)
            cout << "Faltam " << 360-diascorridos << " dias para o natal!\n";
        else if(diascorridos == 359)
            cout << "E vespera de natal!\n";
        else if(diascorridos == 360)
            cout << "E natal!\n";
        else
            cout << "Ja passou!\n";
    }
    
    return 0;
}