//1212	Aritmética Primária	Accepted	C	0.004	01/11/2019 02:11:33
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, m, auxn, auxm, carry=0, k=0;
    int stop = 0;
    
    do{
    	scanf("%i %i", &n, &m);
        
        if(n==0 && m==0)
            stop = 1;
            
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
        
        if(stop == 0){
            if(k == 0)
                printf("No carry operation.\n");
            else if(k == 1)
                printf("1 carry operation.\n");
            else
                printf("%i carry operations.\n", k);
        }
        
        k = 0;
        carry = 0;
    }while(stop == 0);
    
    return 0;
}