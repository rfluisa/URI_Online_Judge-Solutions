//1075	Resto 2	Accepted	C	0.000	19/07/2015 22:41:38
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1;

    scanf("%i", &n);

    do
    {
        if(i%n == 2)
            printf("%i\n", i);
        i+=1;
    }while(i<=10000);


    return 0;
}