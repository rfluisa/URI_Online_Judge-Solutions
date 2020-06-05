//1019	Conversão de Tempo	Accepted	C	0.000	19/06/2015 23:57:06
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i",&n);


    if(n<60)
        printf("0:0:%i\n",n);
    else if(n>60 && n<3600)
        printf("0:%i:%i\n",n/60,n%60);
    else
        printf("%i:%i:%i\n",n/3600,(n%3600)/60,(n%3600)%60);
    return 0;
}