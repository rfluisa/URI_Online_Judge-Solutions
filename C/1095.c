//1095	Sequencia IJ 1	Accepted	C	0.000	07/08/2015 08:57:59
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, I=1, J=60;

    for(p=0; J>=0; p++)
    {
        printf("I=%i J=%i\n", I, J);
        J-=5;
        I+=3;
    }


    return 0;
}