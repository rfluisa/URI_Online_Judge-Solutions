//2140	Duas Notas	Accepted	C++	0.000	26/12/2018 22:30:05
#include <iostream>

using namespace std;

int main()
{
    int k=0, n, nn, m;
    
    cin >> n >> nn;
    
    do{
        m = nn - n;
        
        if(m/100 !=0 ){
            k+=m/100;
            m=m%100;
        }
        if(m/50 !=0 ){
            k+=m/50;
            m=m%50;
        }
        if(m/20 !=0 ){
            k+=m/20;
            m=m%20;
        }
        if(m/10 !=0 ){
            k+=m/10;
            m=m%10;
        }
        if(m/5 !=0 ){
            k+=m/5;
            m=m%5;
        }
        if(m/2 !=0 ){
            k+=m/2;
            m=m%2;
        }
        
        if(k==2)
            cout << "possible\n";
        else
            cout << "impossible\n";
        
        k=0;
        cin >> n >> nn;
    }while(n!=0 && nn!=0);
    
    return 0;
}