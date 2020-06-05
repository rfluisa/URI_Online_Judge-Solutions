//1156	Sequência S II	Accepted	C	0.000	28/12/2016 01:54:49
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s=1, i=3, j=2;

    while(i!=39){
        s+=(i/j);
        i+=2;
        j*=2;
    }

    printf("%.2lf\n",s);

    return 0;
}