//1212	Aritmética Primária	Accepted	C++	0.024	14/01/2019 22:08:43
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int n, m, auxn, auxm, carry=0, k=0;
    bool stop = false;
    
    do{
        cin >> n >> m;
        
        if(n==0 && m==0)
            stop = true;
            
        while(n != 0 || m !=0){
            
            auxn = n%10;
            auxm = m%10;
            
            if(auxn + auxm + carry > 9){
                carry = 1;
                k++;
            }else
                carry = 0;
            
            n/=10;
            m/=10;
        }
        
        if(!stop){
            if(k == 0)
                cout << "No carry operation.\n";
            else if(k == 1)
                cout << "1 carry operation.\n";
            else
                cout << k << " carry operations.\n";
        }
        
        k = 0;
        carry = 0;
    }while(!stop);
    
    return 0;
}