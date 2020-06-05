//2780	Basquete de Robôs	Accepted	C	0.000	06/05/2019 22:20:13
#include <stdlib.h>

int main()
{
    int n;
    
    scanf("%i", &n);
    
    if(n<=800)
        printf("1\n");
    else if(n>800 && n<=1400)
        printf("2\n");
    else
        printf("3\n");

    return 0;
}