//2808	Mais Cavalos	Accepted	C++	0.000	14/05/2019 22:24:40
#include <stdio.h>

int main()
{
    char a1, b1;
    int a2, b2;
    
    scanf(" %c%i %c%i", &a1, &a2, &b1, &b2);
    
    if((a1-1 == b1 || a1+1 == b1) && (a2-2 == b2 || a2+2 == b2))
            printf("VALIDO\n");
    else if(a1-2 == b1 || a1+2 == b1 && (a2-1 == b2 || a2+1 == b2))
            printf("VALIDO\n");
    else
        printf("INVALIDO\n");
    
    return 0;
}