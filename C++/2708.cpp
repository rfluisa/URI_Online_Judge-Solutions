//2708	Turistas no Parque Huacac...	Accepted	C++	0.000	04/01/2019 22:27:26
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main (){
    int tur=0, jipe=0, num;
    char op[20]="oi";
    
    do{
        scanf(" %s", &op);
        cin >> num;
        
        if(strcmp(op,"SALIDA") == 0){
            tur += num;
            jipe++;
        }else if(strcmp(op,"VUELTA") == 0){
            tur -= num;
            jipe--;
        }
        
    }while(strcmp(op,"ABEND") != 0);
    
    cout << tur << "\n";
    cout << jipe << "\n";
    
    return 0;
}