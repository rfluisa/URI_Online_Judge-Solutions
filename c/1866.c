//1866	Conta	Accepted	C	0.000	01/01/2017 18:20:05
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    int s=0, i, n, t, k=0;

    scanf("%d", &t);

    while(k<t){
        scanf("%d", &n);

        for(i=1; i<=n; i++){

            if(i%2==0)
                s-=1;
            else
                s+=1;
        }

        printf("%d\n", s);
        s=0;

        k++;
    }
    return 0;
}