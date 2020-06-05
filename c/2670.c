//2670	Máquina de Café	Accepted	C	0.000	01/11/2019 02:05:43
#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, b, c, res1, res2, res3;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    res1 = (b * 2) + (c * 4);
    res2 = (a * 2) + (c * 2);
    res3 = (b * 2) + (a * 4);
    
    if(res1 >= res2){
        if(res2 > res3)
            printf("%i\n",res3);
        else
            printf("%i\n",res2);
    }else{
        if(res1 > res3)
            printf("%i\n",res3);
        else
            printf("%i\n",res1);
    }
    
    return 0;
}