//1155	Sequência S	Accepted	C	0.000	09/05/2016 00:49:36
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s=0, i=1;

    do
    {
        s+=(1/i);
        i++;
    }while(i<101);

    printf("%.2f\n", s);


    return 0;
}