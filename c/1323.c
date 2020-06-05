//1323	Feynman	Accepted	C	0.008	14/10/2018 17:00:39
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num=-1, i, sum=0;

    do{

        scanf("%d", &num);

        for(i=1; i<=num; i++)
            sum+=pow(i,2);
        if(sum!=0)
            printf("%d\n", sum);
        sum = 0;
    }while(num != 0);


    return 0;
}