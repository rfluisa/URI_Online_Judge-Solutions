//1074	Par ou Ímpar	Accepted	C	0.000	19/07/2015 22:34:21
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i=0, n;

    scanf("%i", &t);

    do
    {
        scanf("%i", &n);
        if(n == 0)
            printf("NULL\n");
        else if(n%2 == 0)
        {
            if(n > 0)
                printf("EVEN POSITIVE\n");
            else
                printf("EVEN NEGATIVE\n");
        }
        else
        {
            if(n > 0)
                printf("ODD POSITIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        i+=1;
    }while(i < t);


    return 0;
}