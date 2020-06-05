//1198	O Bravo Guerreiro Hashmat	Accepted	C	0.060	09/05/2016 16:14:18
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b;

    while(scanf("%lld %lld", &a, &b)!= EOF)
    {
        if(a>b)
            printf("%lld\n",a-b);
        else
            printf("%lld\n",b-a);
    }
}