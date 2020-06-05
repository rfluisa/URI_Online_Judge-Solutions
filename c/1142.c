//1142	PUM	Accepted	C	0.012	07/05/2016 15:23:12
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k=0;

    scanf("%d", &n);

    for(k=1; k<=n*4; k++)
    {
        if(k%4==0)
            printf("PUM\n");
        else
            printf("%d ", k);

    }

}