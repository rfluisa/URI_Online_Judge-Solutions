//1154	Idades	Accepted	C	0.000	09/05/2016 00:40:50
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1, i=0;
    float b=0;

    while(n>=0)
    {
        scanf("%d", &n);

        if(n>=0)
        {
            b+=n;
            i++;
        }
    }
    b/=i;
    printf("%.2f\n", b);
    
    return 0;
}