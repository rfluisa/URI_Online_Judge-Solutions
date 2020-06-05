//2126	Procurando Subsequências	Accepted	C++	0.000	18/12/2018 12:42:22
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int k=1, occ=0;
    string n1, n2;
    size_t found;
    
    while(cin >> n1 >> n2){
        
        found = n2.find(n1);
        
        if(found == string::npos)
            cout << "Caso #" << k << ":\nNao existe subsequencia\n\n";
        else{
            found = 0;
            while((found = n2.find(n1, found)) != string::npos){
                occ++;
                found++;
            }
            found = n2.rfind(n1);
            cout << "Caso #" << k << ":\nQtd.Subsequencias: " << occ << "\nPos: " << found+1 << "\n\n";
        }
        occ = 0;
        k++;
    }
    
    return 0;
}