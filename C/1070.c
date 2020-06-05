//1070	Seis Números Ímpares	Accepted	C	0.000	02/07/2015 00:00:54
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, k=0;

    scanf("%i", &n);

    do
    {
        if(n%2 !=0)
        {
            printf("%i\n", n);
            k++;
        }
        n++;
    }while(k!=6);


    return 0;
}