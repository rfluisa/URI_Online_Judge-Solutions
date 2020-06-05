//2826	Léxico	Accepted	C++	0.000	04/01/2019 22:10:50
#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    char palavra1[20], palavra2[20], k=0;
    
    scanf(" %s", &palavra1);
    scanf(" %s", &palavra2);
    
    for(int i=0; i<20; i++){
        if(palavra1[i] < palavra2[i]){
            cout << palavra1 << "\n" << palavra2 << "\n";
            k = 1;
            break;
        } else if(palavra1[i] > palavra2[i]){
            cout << palavra2 << "\n" << palavra1 << "\n";
            k = 1;
            break;
        }
    }
    
    if(k==0)
        cout << palavra1 << "\n" << palavra2 << "\n";
    
    return 0;
}