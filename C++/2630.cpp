//2630	Escala de Cinza	Accepted	C++	0.000	12/01/2019 23:51:25
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int tests;
    double r, g, b;
    int grey;
    char op[50];
    
    cin >> tests;
    //P = 0, 30R + 0, 59G + 0, 11B
    for(int i=0; i<tests; i++){
        scanf(" %s", &op);
        cin >> r >> g >> b;
        
        if(strcmp(op,"eye") == 0){
            grey = (r*0.3)+(g*0.59)+(b*0.11);
        }else if(strcmp(op,"min") == 0){
            if(r<=g && r<=b)
                grey = r;
            else if(g<=r && g<=b)
                grey = g;
            else
                grey = b;
        }
        else if(strcmp(op,"max") == 0){
            if(r>=g && r>=b)
                grey = r;
            else if(g>=r && g>=b)
                grey = g;
            else
                grey = b;
        }else if(strcmp(op,"mean") == 0){
            grey = (r+g+b)/3;
        }
        
        cout << "Caso #" << i+1 << ": " << grey << "\n";
    }
    
    return 0;
}