//1096	Sequencia IJ 2	Accepted	C	0.000	07/08/2015 09:07:57
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1, I=1, J=7;

    do
    {
        printf("I=%i J=%i\n", I, J);
        J--;
        n++;
        if(J==4)
        {
            I+=2;
            J = 7;
        }
    }while(n<=15);


    return 0;
}