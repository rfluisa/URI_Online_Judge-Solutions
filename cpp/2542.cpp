//2542	Iu-Di-Oh!	Accepted	C++	0.260	09/01/2019 00:40:46
#include <iostream>

using namespace std;

int main()
{
    int atributos, m, l, baralhoM[100][100], baralhoL[100][100], escolhaM, escolhaL, escolhaA;
    
    while(cin >> atributos){
        
        cin >> m >> l;
        
        for(int i=0; i<m; i++)
            for(int j=0; j<atributos; j++)
                cin >> baralhoM[i][j];
        
        for(int i=0; i<l; i++)
            for(int j=0; j<atributos; j++)
                cin >> baralhoL[i][j];
        
        cin >> escolhaM >> escolhaL;
        cin >> escolhaA;
        
        if(baralhoM[escolhaM-1][escolhaA-1] > baralhoL[escolhaL-1][escolhaA-1])
            cout << "Marcos\n";
        else if(baralhoM[escolhaM-1][escolhaA-1] < baralhoL[escolhaL-1][escolhaA-1])
            cout << "Leonardo\n";
        else
            cout << "Empate\n";
        
    }

    return 0;
}