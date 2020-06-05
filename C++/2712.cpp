//2712	Rodízio Veicular	Accepted	C++	0.000	01/01/2019 22:32:32
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char placa[100];
    int tests, i=0;
    
    cin >> tests;
    
    while(i < tests){
        
        cin >> placa;
        
        if(strlen(placa) == 8){
            if(placa[3] == '-' && 
            (placa[0] >= 'A' && placa[0] <= 'Z') && 
            (placa[1] >= 'A' && placa[1] <= 'Z') && 
            (placa[2] >= 'A' && placa[2] <= 'Z') &&
            (placa[2] >= 'A' && placa[2] <= 'Z') &&
            (placa[4] >= '0' && placa[4] <= '9') &&
            (placa[5] >= '0' && placa[5] <= '9') &&
            (placa[6] >= '0' && placa[6] <= '9') &&
            (placa[7] >= '0' && placa[7] <= '9')){
                if(placa[7] == '0' || placa[7] == '9')
                    cout << "FRIDAY\n";
                else if(placa[7] < '3')
                    cout << "MONDAY\n";
                else if(placa[7] < '5')
                    cout << "TUESDAY\n";
                else if(placa[7] < '7')
                    cout << "WEDNESDAY\n";
                else
                    cout << "THURSDAY\n";
            }
            else
                cout << "FAILURE\n";
        } 
        else
            cout << "FAILURE\n";
        
        i++;
    }

    return 0;
}