//2540	Impeachment do Líder	Accepted	C++	0.712	20/10/2018 01:02:44
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n, aux, votos=0;
    
    while(scanf("%d", &n) != EOF){
        
        for(int i=0; i<n; i++){
            cin >> aux;
        
            if(aux == 1)
                votos++;
        }
        
        if(votos >= (float)n/3*2)
            cout << "impeachment\n";
        else
            cout << "acusacao arquivada\n";

        votos=0;
    }

    return 0;
}