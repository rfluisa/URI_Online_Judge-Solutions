//1097	Sequencia IJ 3	Accepted	C	0.000	07/08/2015 09:15:08
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1, I=1, J=7, aux=4;

    do
    {
        printf("I=%i J=%i\n", I, J);
        J--;
        n++;
        if(J==aux)
        {
            J+=5;
            I+=2;
            aux+=2;
        }


    }while(n<=15);


    return 0;
}